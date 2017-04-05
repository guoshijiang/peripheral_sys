/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userLogin
{
public:
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_back;

    void setupUi(QWidget *userLogin)
    {
        if (userLogin->objectName().isEmpty())
            userLogin->setObjectName(QStringLiteral("userLogin"));
        userLogin->resize(400, 300);
        userLogin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_login = new QPushButton(userLogin);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(220, 210, 80, 26));
        lineEdit_username = new QLineEdit(userLogin);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(152, 60, 171, 26));
        lineEdit_password = new QLineEdit(userLogin);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(152, 120, 171, 26));
        label = new QLabel(userLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 81, 21));
        label_2 = new QLabel(userLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 71, 20));
        pushButton_back = new QPushButton(userLogin);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(90, 210, 80, 26));

        retranslateUi(userLogin);

        QMetaObject::connectSlotsByName(userLogin);
    } // setupUi

    void retranslateUi(QWidget *userLogin)
    {
        userLogin->setWindowTitle(QApplication::translate("userLogin", "Form", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("userLogin", "\347\231\273\345\275\225", Q_NULLPTR));
        lineEdit_username->setText(QString());
        label->setText(QApplication::translate("userLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("userLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("userLogin", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userLogin: public Ui_userLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
