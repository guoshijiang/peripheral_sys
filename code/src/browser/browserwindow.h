#ifndef BROWSERWINDOW_H
#define BROWSERWINDOW_H

#include <QMainWindow>
#include <QWebEnginePage>
#include <QComboBox>
#include <QPushButton>

QT_BEGIN_NAMESPACE
class QProgressBar;
QT_END_NAMESPACE

class TabWidget;
class UrlLineEdit;
class WebView;

class BrowserWindow : public QMainWindow
{
    Q_OBJECT

public:
    BrowserWindow(QWidget *parent = nullptr, Qt::WindowFlags flags = 0);
    ~BrowserWindow();
    QSize sizeHint() const override;
    TabWidget *tabWidget() const;
    WebView *currentTab() const;
    void loadPage(const QString &url);
    void loadPage(const QUrl &url);
    void loadHomePage();
    void closeEvent(QCloseEvent *event);

protected:

private slots:
    void handleNewWindowTriggered();
    void handleWebViewLoadProgress(int);
    void handleWebViewTitleChanged(const QString &title);
    void handleWebViewUrlChanged(const QUrl &url);
    void handleWebViewIconChanged(const QIcon &icon);
    void tologin();
    void ywFunc();
    void dyFunc();
    void examination_Report();

private:
    QMenu *createFileMenu();
    QToolBar *createToolBar();
    QToolBar *createToolBar1();

private:
    TabWidget *m_tabWidget;
    QProgressBar *m_progressBar;
    QAction *m_historyBackAction;
    QAction *m_historyForwardAction;
    QAction *m_stopAction;
    QAction *m_reloadAction;
    QAction *m_stopReloadAction;
    UrlLineEdit *m_urlLineEdit;
    QPushButton *p;
    QAction  *m_ywAction;
    QAction  *m_dyAction;
    QMenu *m;

signals:
   void on_s_clicked();

};

#endif // BROWSERWINDOW_H
