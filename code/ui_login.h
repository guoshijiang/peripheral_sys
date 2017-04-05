/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_databaseName;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton;
    QPushButton *pushButton_back;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(574, 352);
        login->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(70, 120, 121, 91));
        frame->setStyleSheet(QStringLiteral("border-image: url(:/new/picture/timg.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 56, 18));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 80, 111, 18));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 140, 91, 18));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 200, 71, 18));
        label_4->setStyleSheet(QStringLiteral(""));
        pushButton_login = new QPushButton(login);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(400, 280, 80, 26));
        pushButton_login->setStyleSheet(QStringLiteral(""));
        lineEdit_ip = new QLineEdit(login);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(390, 20, 113, 26));
        lineEdit_databaseName = new QLineEdit(login);
        lineEdit_databaseName->setObjectName(QStringLiteral("lineEdit_databaseName"));
        lineEdit_databaseName->setGeometry(QRect(390, 80, 113, 26));
        lineEdit_username = new QLineEdit(login);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(390, 140, 113, 26));
        lineEdit_password = new QLineEdit(login);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(390, 200, 113, 26));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 280, 80, 26));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_back = new QPushButton(login);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(100, 280, 80, 26));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\346\225\260\346\215\256\346\265\213\350\257\225", Q_NULLPTR));
        label->setText(QApplication::translate("login", "ip  :", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260 :", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215 :", Q_NULLPTR));
        label_4->setText(QApplication::translate("login", "\345\257\206\347\240\201 :", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("login", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "\346\243\200\346\237\245\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("login", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
