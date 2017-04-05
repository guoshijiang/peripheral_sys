/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "browser.h"
#include "browserwindow.h"
#include "tabwidget.h"
#include "urllineedit.h"
#include "webview.h"
#include <QApplication>
#include <QCloseEvent>
#include <QDesktopWidget>
#include <QFileDialog>
#include <QMenuBar>
#include <QMessageBox>
#include <QProgressBar>
#include <QStatusBar>
#include <QToolBar>
#include <QVBoxLayout>
#include "dbLogin/login.h"
#include"userLogin/userlogin.h"
#include <QPushButton>
#include "printer/d_printer.h"
#include <QProcess>
#include "report/examination_login.h"

QString path2=QDir::currentPath();
QString pic;
BrowserWindow::BrowserWindow(QWidget *parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
    , m_tabWidget(new TabWidget(this))
    , m_progressBar(new QProgressBar(this))
    , m_historyBackAction(nullptr)
    , m_historyForwardAction(nullptr)
    , m_stopAction(nullptr)
    , m_reloadAction(nullptr)
    , m_stopReloadAction(nullptr)
    , m_urlLineEdit(new UrlLineEdit(this))
{

    setToolButtonStyle(Qt::ToolButtonFollowStyle);
    setAttribute(Qt::WA_DeleteOnClose, true);

    QToolBar *toolbar = createToolBar();
    addToolBar(toolbar);
    this->addToolBarBreak();
    QToolBar *toolbar1 = createToolBar1();
    addToolBar(toolbar1);
    menuBar()->addMenu(createFileMenu());

    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->setSpacing(0);
    layout->setMargin(0);
    addToolBarBreak();

    m_progressBar->setMaximumHeight(1);
    m_progressBar->setTextVisible(false);
    m_progressBar->setStyleSheet(QStringLiteral("QProgressBar {border: 0px } QProgressBar::chunk { background-color: red; }"));
    p->setStyleSheet("QPushButton::menu-indicator{image:none;}");

    layout->addWidget(m_progressBar);
    layout->addWidget(m_tabWidget);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
    connect(m_tabWidget, &TabWidget::titleChanged, this, &BrowserWindow::handleWebViewTitleChanged);
    connect(m_tabWidget, &TabWidget::linkHovered, [this](const QString& url) {
        statusBar()->showMessage(url);
    });
    connect(m_tabWidget, &TabWidget::loadProgress, this, &BrowserWindow::handleWebViewLoadProgress);
    connect(m_tabWidget, &TabWidget::urlChanged, this, &BrowserWindow::handleWebViewUrlChanged);
    connect(m_tabWidget, &TabWidget::iconChanged, this, &BrowserWindow::handleWebViewIconChanged);
    connect(m_urlLineEdit, &QLineEdit::returnPressed, this, [this]() {
        pic=":/new/picture/6.png";
        m_urlLineEdit->setFavIcon(QIcon(QString(pic)));
        loadPage(m_urlLineEdit->url());
    });
       connect(m_ywAction, &QAction::triggered, this, &BrowserWindow::ywFunc);
       connect(m_dyAction, &QAction::triggered, this, &BrowserWindow::dyFunc);
       connect(p,&QPushButton::clicked,this,&BrowserWindow::examination_Report);
    m_urlLineEdit->setFavIcon(QIcon(QString(pic)));
    handleWebViewTitleChanged(tr("Qt Simple Browser"));
    m_tabWidget->createTab();
}

void BrowserWindow::examination_Report(){
    examination_login *el=new examination_login();
    el->show();
}

void BrowserWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton button;
    button=QMessageBox::question(this,tr("exit"),QStringLiteral("你要退出吗?"),QMessageBox::Yes | QMessageBox::No);
    if(button==QMessageBox::No){
        event->ignore();
    }else if(button==QMessageBox::Yes){
        event->accept();
        QProcess process;
                #ifdef WIN32
                   process.execute("TASKKILL /IM QtWebEngineProcess.exe /F");
                   process.close();
                #else
                    process.execute("kill QtWebEngineProcess.exe");
                    process.close();
               #endif;
    }
}

BrowserWindow::~BrowserWindow()
{
}

QSize BrowserWindow::sizeHint() const
{
    QRect desktopRect = QApplication::desktop()->screenGeometry();
    QSize size = desktopRect.size() * qreal(0.9);
    return size;
}

QMenu *BrowserWindow::createFileMenu()
{
    QMenu *fileMenu = new QMenu(tr("&File"));
   // fileMenu->addAction(tr("login"), this, &BrowserWindow::tologin, QKeySequence::New);
    QAction *closeAction = new QAction(tr("&Quit"),this);
    closeAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_Q));
    connect(closeAction, &QAction::triggered, this, &QWidget::close);
    fileMenu->addAction(closeAction);
    connect(fileMenu, &QMenu::aboutToShow, [closeAction]() {
        if (Browser::instance().windows().count() == 1)
            closeAction->setText(tr("&Quit"));
        else
            closeAction->setText(tr("&Close Window"));
    });
    return fileMenu;
}

QToolBar *BrowserWindow::createToolBar()
{
    QToolBar *navigationBar = new QToolBar(tr("Navigation"));
    navigationBar->setAllowedAreas(Qt::TopToolBarArea | Qt::BottomToolBarArea);
    navigationBar->toggleViewAction()->setEnabled(false);

    m_historyBackAction = new QAction(this);
    QList<QKeySequence> backShortcuts = QKeySequence::keyBindings(QKeySequence::Back);
    for (auto it = backShortcuts.begin(); it != backShortcuts.end();) {
        // Chromium already handles navigate on backspace when appropriate.
        if ((*it)[0] == Qt::Key_Backspace)
            it = backShortcuts.erase(it);
        else
            ++it;
    }
    // For some reason Qt doesn't bind the dedicated Back key to Back.
    backShortcuts.append(QKeySequence(Qt::Key_Back));
    m_historyBackAction->setShortcuts(backShortcuts);
    m_historyBackAction->setIconVisibleInMenu(false);
    m_historyBackAction->setIcon(QIcon(QStringLiteral(":/new/picture/go-previous.png")));
    connect(m_historyBackAction, &QAction::triggered, [this]() {
        m_tabWidget->triggerWebPageAction(QWebEnginePage::Back);
    });
    navigationBar->addAction(m_historyBackAction);
    m_historyForwardAction = new QAction(this);
    QList<QKeySequence> fwdShortcuts = QKeySequence::keyBindings(QKeySequence::Forward);
    for (auto it = fwdShortcuts.begin(); it != fwdShortcuts.end();) {
        if (((*it)[0] & Qt::Key_unknown) == Qt::Key_Backspace)
            it = fwdShortcuts.erase(it);
        else
            ++it;
    }
    fwdShortcuts.append(QKeySequence(Qt::Key_Forward));
    m_historyForwardAction->setShortcuts(fwdShortcuts);
    m_historyForwardAction->setIconVisibleInMenu(false);
    m_historyForwardAction->setIcon(QIcon(QStringLiteral(":/new/picture/go-next.png")));
    connect(m_historyForwardAction, &QAction::triggered, [this]() {
        m_tabWidget->triggerWebPageAction(QWebEnginePage::Forward);
    });
    navigationBar->addAction(m_historyForwardAction);
    m_stopReloadAction = new QAction(this);
    connect(m_stopReloadAction, &QAction::triggered, [this]() {
        m_tabWidget->triggerWebPageAction(QWebEnginePage::WebAction(m_stopReloadAction->data().toInt()));
    });
    navigationBar->addAction(m_stopReloadAction);
    navigationBar->addWidget(m_urlLineEdit);
    QMenu *m_menu = new QMenu(this);
    m_ywAction = new QAction(m_menu);
    m_dyAction = new QAction(m_menu);
        m_ywAction->setText(QStringLiteral("运维系统"));
        m_dyAction->setText(QStringLiteral("打印"));
        m_menu->addAction(m_ywAction);
        m_menu->addAction(m_dyAction);
         p=new QPushButton(this);
         p->setMaximumWidth(20);
       p->setIcon(QIcon(":/new/picture/dian2.png"));
       p->setStyleSheet("background-color:white");
       p->setFlat(true);
       p->setMenu(m_menu);
    navigationBar->addWidget(p);
    int size = m_urlLineEdit->sizeHint().height();
    navigationBar->setIconSize(QSize(size, size));
    return navigationBar;
}

QToolBar *BrowserWindow::createToolBar1()
{
    QToolBar *navigationBar = new QToolBar(tr("Navigation"));
    navigationBar->setAllowedAreas(Qt::TopToolBarArea | Qt::BottomToolBarArea);
    navigationBar->toggleViewAction()->setEnabled(false);
       p=new QPushButton(this);
       p->setMaximumWidth(60);

       p->setText(QStringLiteral("体检报告"));
       p->setFlat(true);
    navigationBar->addWidget(p);
    int size = m_urlLineEdit->sizeHint().height();
    navigationBar->setIconSize(QSize(size, size));
    return navigationBar;
}

void BrowserWindow::handleWebViewIconChanged(const QIcon &icon)
{
    m_urlLineEdit->setFavIcon(icon);
}

void BrowserWindow::handleWebViewUrlChanged(const QUrl &url)
{
    m_urlLineEdit->setUrl(url);
    if (url.isEmpty())
        m_urlLineEdit->setFocus();
}

void BrowserWindow::tologin(){
            login *lg=new login();
            lg->show();
}

void BrowserWindow::handleWebViewTitleChanged(const QString &title)
{
    if (title.isEmpty())
        setWindowTitle(tr("Qt Simple Browser"));
    else
        setWindowTitle(tr("%1 - Qt Simple Browser").arg(title));
}

void BrowserWindow::handleNewWindowTriggered()
{
    BrowserWindow *window = new BrowserWindow();
    Browser::instance().addWindow(window);
    window->loadHomePage();
}

void BrowserWindow::loadHomePage()
{
    loadPage(QStringLiteral("http://www.bjdaos.com"));
}

void BrowserWindow::loadPage(const QString &page)
{
    loadPage(QUrl::fromUserInput(page));
}

void BrowserWindow::loadPage(const QUrl &url)
{
    if (url.isValid()) {
        m_urlLineEdit->setUrl(url);
        m_tabWidget->setUrl(url);
    }
}

TabWidget *BrowserWindow::tabWidget() const
{
    return m_tabWidget;
}

WebView *BrowserWindow::currentTab() const
{
    return m_tabWidget->currentWebView();
}

void BrowserWindow::handleWebViewLoadProgress(int progress)
{
     pic=":/new/picture/7.jpg";
     m_stopReloadAction->setData(QWebEnginePage::Reload);
     m_stopReloadAction->setIcon(QIcon(QString(pic)));
     m_stopReloadAction->setToolTip(tr("Reload the current page"));
     m_progressBar->setValue(progress < 100 ? progress : 0);
}

void BrowserWindow::ywFunc()
{
    userLogin *lg=new userLogin();
    lg->show();
}

void BrowserWindow::dyFunc()
{
    examination_report *er=new examination_report();
    er->show();
}

