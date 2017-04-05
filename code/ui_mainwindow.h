/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QTreeView *treeView;
    QPushButton *pushButton_business_xiaohao;
    QPushButton *pushButton_find;
    QLineEdit *lineEdit_find;
    QPushButton *pushButton_comfirm;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_update;
    QPushButton *pushButton_back;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QPushButton *pushButton_business;
    QPushButton *pushButton_database;
    QFrame *frame_4;
    QTableView *tableView;
    QPushButton *pushButton_des;
    QPushButton *pushButton_asc;
    QComboBox *comboBox_status;
    QLineEdit *lineEdit_xiaohao;
    QPushButton *pushButton_xiaohao;
    QLabel *label_xiaohao;
    QTableView *tableView_xiaohao;
    QPushButton *pushButton_remove;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QMenu *menutestdb;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(995, 738);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 250, 210);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 80, 181, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(verticalLayoutWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        treeView = new QTreeView(frame_3);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 0, 181, 531));
        treeView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_business_xiaohao = new QPushButton(frame_3);
        pushButton_business_xiaohao->setObjectName(QStringLiteral("pushButton_business_xiaohao"));
        pushButton_business_xiaohao->setGeometry(QRect(20, 40, 131, 26));
        pushButton_business_xiaohao->setStyleSheet(QStringLiteral("background-color: rgb(255, 250, 210);"));

        verticalLayout->addWidget(frame_3);

        pushButton_find = new QPushButton(centralWidget);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(350, 610, 80, 26));
        lineEdit_find = new QLineEdit(centralWidget);
        lineEdit_find->setObjectName(QStringLiteral("lineEdit_find"));
        lineEdit_find->setGeometry(QRect(210, 610, 121, 26));
        lineEdit_find->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_comfirm = new QPushButton(centralWidget);
        pushButton_comfirm->setObjectName(QStringLiteral("pushButton_comfirm"));
        pushButton_comfirm->setGeometry(QRect(210, 550, 80, 26));
        pushButton_comfirm->setStyleSheet(QStringLiteral(""));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(310, 550, 80, 26));
        pushButton_add->setStyleSheet(QStringLiteral(""));
        pushButton_delete = new QPushButton(centralWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(410, 550, 80, 26));
        pushButton_delete->setStyleSheet(QStringLiteral(""));
        pushButton_update = new QPushButton(centralWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(510, 550, 80, 26));
        pushButton_update->setStyleSheet(QStringLiteral(""));
        pushButton_back = new QPushButton(centralWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(620, 550, 80, 26));
        pushButton_back->setStyleSheet(QStringLiteral(""));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, -10, 851, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(horizontalLayoutWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("selection-color: rgb(0, 170, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_business = new QPushButton(frame_2);
        pushButton_business->setObjectName(QStringLiteral("pushButton_business"));
        pushButton_business->setGeometry(QRect(170, 20, 91, 26));
        pushButton_database = new QPushButton(frame_2);
        pushButton_database->setObjectName(QStringLiteral("pushButton_database"));
        pushButton_database->setGeometry(QRect(50, 20, 80, 26));

        horizontalLayout->addWidget(frame_2);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(199, 79, 791, 451));
        frame_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 791, 451));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(170, 255, 255);\n"
"background-color: rgb(255, 250, 210);\n"
"background-color: rgb(85, 255, 127);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_des = new QPushButton(frame_4);
        pushButton_des->setObjectName(QStringLiteral("pushButton_des"));
        pushButton_des->setGeometry(QRect(380, 60, 80, 26));
        pushButton_des->setStyleSheet(QStringLiteral("background-color: rgb(255, 250, 210);"));
        pushButton_asc = new QPushButton(frame_4);
        pushButton_asc->setObjectName(QStringLiteral("pushButton_asc"));
        pushButton_asc->setGeometry(QRect(490, 60, 80, 26));
        pushButton_asc->setStyleSheet(QStringLiteral("background-color: rgb(255, 250, 210);"));
        comboBox_status = new QComboBox(frame_4);
        comboBox_status->setObjectName(QStringLiteral("comboBox_status"));
        comboBox_status->setGeometry(QRect(190, 60, 151, 26));
        comboBox_status->setStyleSheet(QStringLiteral("selection-color: rgb(255, 170, 0);"));
        lineEdit_xiaohao = new QLineEdit(centralWidget);
        lineEdit_xiaohao->setObjectName(QStringLiteral("lineEdit_xiaohao"));
        lineEdit_xiaohao->setGeometry(QRect(370, 100, 181, 26));
        pushButton_xiaohao = new QPushButton(centralWidget);
        pushButton_xiaohao->setObjectName(QStringLiteral("pushButton_xiaohao"));
        pushButton_xiaohao->setGeometry(QRect(580, 100, 80, 26));
        label_xiaohao = new QLabel(centralWidget);
        label_xiaohao->setObjectName(QStringLiteral("label_xiaohao"));
        label_xiaohao->setGeometry(QRect(250, 100, 91, 21));
        tableView_xiaohao = new QTableView(centralWidget);
        tableView_xiaohao->setObjectName(QStringLiteral("tableView_xiaohao"));
        tableView_xiaohao->setGeometry(QRect(200, 180, 791, 351));
        pushButton_remove = new QPushButton(centralWidget);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));
        pushButton_remove->setGeometry(QRect(690, 100, 80, 26));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(210, 140, 51, 24));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(290, 140, 82, 24));
        MainWindow->setCentralWidget(centralWidget);
        frame_4->raise();
        verticalLayoutWidget->raise();
        pushButton_find->raise();
        lineEdit_find->raise();
        pushButton_comfirm->raise();
        pushButton_add->raise();
        pushButton_delete->raise();
        pushButton_update->raise();
        pushButton_back->raise();
        horizontalLayoutWidget->raise();
        lineEdit_xiaohao->raise();
        pushButton_xiaohao->raise();
        label_xiaohao->raise();
        tableView_xiaohao->raise();
        pushButton_remove->raise();
        radioButton->raise();
        checkBox->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 995, 23));
        menutestdb = new QMenu(menuBar);
        menutestdb->setObjectName(QStringLiteral("menutestdb"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menutestdb->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "main_mune", Q_NULLPTR));
        pushButton_business_xiaohao->setText(QApplication::translate("MainWindow", "\351\224\200\345\217\267", Q_NULLPTR));
        pushButton_find->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_comfirm->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_business->setText(QApplication::translate("MainWindow", "\344\270\232\345\212\241", Q_NULLPTR));
        pushButton_database->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        pushButton_des->setText(QApplication::translate("MainWindow", "des", Q_NULLPTR));
        pushButton_asc->setText(QApplication::translate("MainWindow", "asc", Q_NULLPTR));
        comboBox_status->clear();
        comboBox_status->insertItems(0, QStringList()
         << QString()
        );
        pushButton_xiaohao->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        label_xiaohao->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\344\275\223\346\243\200\345\215\225\345\217\267:", Q_NULLPTR));
        pushButton_remove->setText(QApplication::translate("MainWindow", "\351\224\200\345\217\267", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\345\244\215\351\200\211", Q_NULLPTR));
        menutestdb->setTitle(QApplication::translate("MainWindow", "\350\277\252\345\256\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
