/********************************************************************************
** Form generated from reading UI file 'examination_login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINATION_LOGIN_H
#define UI_EXAMINATION_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_examination_login
{
public:
    QLineEdit *lineEdit_no;
    QLabel *label;
    QPushButton *pushButton_lookInfo;
    QLabel *label_2;
    QLineEdit *lineEdit_no_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_no_3;
    QLineEdit *lineEdit_no_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QTableWidget *tableWidget;

    void setupUi(QWidget *examination_login)
    {
        if (examination_login->objectName().isEmpty())
            examination_login->setObjectName(QStringLiteral("examination_login"));
        examination_login->resize(1199, 626);
        examination_login->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_no = new QLineEdit(examination_login);
        lineEdit_no->setObjectName(QStringLiteral("lineEdit_no"));
        lineEdit_no->setGeometry(QRect(110, 60, 151, 21));
        lineEdit_no->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(examination_login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 61, 20));
        pushButton_lookInfo = new QPushButton(examination_login);
        pushButton_lookInfo->setObjectName(QStringLiteral("pushButton_lookInfo"));
        pushButton_lookInfo->setGeometry(QRect(1110, 59, 61, 21));
        pushButton_lookInfo->setStyleSheet(QStringLiteral("background-color: rgb(16, 122, 193);"));
        label_2 = new QLabel(examination_login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 51, 31));
        label_2->setStyleSheet(QStringLiteral(""));
        lineEdit_no_2 = new QLineEdit(examination_login);
        lineEdit_no_2->setObjectName(QStringLiteral("lineEdit_no_2"));
        lineEdit_no_2->setGeometry(QRect(330, 60, 151, 21));
        lineEdit_no_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(examination_login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 60, 31, 20));
        label_4 = new QLabel(examination_login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(530, 60, 61, 20));
        lineEdit_no_3 = new QLineEdit(examination_login);
        lineEdit_no_3->setObjectName(QStringLiteral("lineEdit_no_3"));
        lineEdit_no_3->setGeometry(QRect(590, 60, 151, 21));
        lineEdit_no_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_no_4 = new QLineEdit(examination_login);
        lineEdit_no_4->setObjectName(QStringLiteral("lineEdit_no_4"));
        lineEdit_no_4->setGeometry(QRect(750, 60, 151, 21));
        lineEdit_no_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(examination_login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(940, 60, 61, 20));
        comboBox = new QComboBox(examination_login);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(1010, 60, 69, 22));
        tableWidget = new QTableWidget(examination_login);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 100, 1141, 511));

        retranslateUi(examination_login);

        QMetaObject::connectSlotsByName(examination_login);
    } // setupUi

    void retranslateUi(QWidget *examination_login)
    {
        examination_login->setWindowTitle(QApplication::translate("examination_login", "login", Q_NULLPTR));
        label->setText(QApplication::translate("examination_login", "\344\275\223\346\243\200\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_lookInfo->setText(QApplication::translate("examination_login", "\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("examination_login", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label_3->setText(QApplication::translate("examination_login", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("examination_login", "\344\275\223\346\243\200\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("examination_login", "\344\275\223\346\243\200\345\215\225\345\217\267", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("examination_login", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("examination_login", "\345\245\263", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class examination_login: public Ui_examination_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINATION_LOGIN_H
