/********************************************************************************
** Form generated from reading UI file 'report5.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT5_H
#define UI_REPORT5_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report5
{
public:
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_sex;
    QLabel *label_7;
    QLineEdit *lineEdit_age;
    QLabel *label_5;
    QLineEdit *lineEdit_date;
    QLabel *label_9;
    QLabel *label_name;
    QTableView *tableView;
    QLabel *label_doc;
    QLabel *label_docName;
    QLabel *label_pre;
    QLabel *label_preName;

    void setupUi(QWidget *report5)
    {
        if (report5->objectName().isEmpty())
            report5->setObjectName(QStringLiteral("report5"));
        report5->resize(681, 835);
        label_4 = new QLabel(report5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 10, 31, 41));
        label_4->setStyleSheet(QStringLiteral(""));
        lineEdit_name = new QLineEdit(report5);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(60, 20, 51, 20));
        label_3 = new QLabel(report5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 31, 41));
        label_3->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(report5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 10, 61, 41));
        label_6->setStyleSheet(QStringLiteral(""));
        lineEdit_sex = new QLineEdit(report5);
        lineEdit_sex->setObjectName(QStringLiteral("lineEdit_sex"));
        lineEdit_sex->setGeometry(QRect(160, 20, 21, 20));
        label_7 = new QLabel(report5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 20, 201, 31));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index3.png);"));
        lineEdit_age = new QLineEdit(report5);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(220, 20, 31, 20));
        label_5 = new QLabel(report5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 10, 31, 41));
        label_5->setStyleSheet(QStringLiteral(""));
        lineEdit_date = new QLineEdit(report5);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(310, 20, 141, 21));
        label_9 = new QLabel(report5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 50, 681, 20));
        label_9->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index4.png);"));
        label_name = new QLabel(report5);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(10, 80, 661, 31));
        label_name->setStyleSheet(QLatin1String("font: 75 12pt \"Aharoni\";\n"
"\n"
"background-color: rgb(216, 236, 224);"));
        tableView = new QTableView(report5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 120, 661, 631));
        label_doc = new QLabel(report5);
        label_doc->setObjectName(QStringLiteral("label_doc"));
        label_doc->setGeometry(QRect(390, 770, 54, 21));
        label_docName = new QLabel(report5);
        label_docName->setObjectName(QStringLiteral("label_docName"));
        label_docName->setGeometry(QRect(460, 770, 54, 21));
        label_pre = new QLabel(report5);
        label_pre->setObjectName(QStringLiteral("label_pre"));
        label_pre->setGeometry(QRect(530, 770, 54, 21));
        label_preName = new QLabel(report5);
        label_preName->setObjectName(QStringLiteral("label_preName"));
        label_preName->setGeometry(QRect(610, 770, 54, 21));

        retranslateUi(report5);

        QMetaObject::connectSlotsByName(report5);
    } // setupUi

    void retranslateUi(QWidget *report5)
    {
        report5->setWindowTitle(QApplication::translate("report5", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("report5", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_name->setText(QString());
        label_3->setText(QApplication::translate("report5", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("report5", "\344\275\223\346\243\200\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        lineEdit_sex->setText(QString());
        label_7->setText(QString());
        lineEdit_age->setText(QString());
        label_5->setText(QApplication::translate("report5", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lineEdit_date->setText(QString());
        label_9->setText(QString());
        label_name->setText(QString());
        label_doc->setText(QString());
        label_docName->setText(QString());
        label_pre->setText(QString());
        label_preName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class report5: public Ui_report5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT5_H
