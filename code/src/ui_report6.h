/********************************************************************************
** Form generated from reading UI file 'report6.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT6_H
#define UI_REPORT6_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report6
{
public:
    QLineEdit *lineEdit_date;
    QLabel *label_7;
    QLabel *label_3;
    QLineEdit *lineEdit_age;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_sex;
    QLabel *label_title;
    QLabel *label_picture;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *report6)
    {
        if (report6->objectName().isEmpty())
            report6->setObjectName(QStringLiteral("report6"));
        report6->resize(681, 835);
        lineEdit_date = new QLineEdit(report6);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(320, 10, 131, 21));
        label_7 = new QLabel(report6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 10, 201, 31));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index3.png);"));
        label_3 = new QLabel(report6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 0, 31, 41));
        label_3->setStyleSheet(QStringLiteral(""));
        lineEdit_age = new QLineEdit(report6);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(220, 10, 31, 20));
        label_4 = new QLabel(report6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 0, 31, 41));
        label_4->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(report6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 0, 61, 41));
        label_6->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(report6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 0, 31, 41));
        label_5->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(report6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 40, 681, 16));
        label_9->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index4.png);"));
        lineEdit_name = new QLineEdit(report6);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(60, 10, 51, 20));
        lineEdit_sex = new QLineEdit(report6);
        lineEdit_sex->setObjectName(QStringLiteral("lineEdit_sex"));
        lineEdit_sex->setGeometry(QRect(150, 10, 31, 20));
        label_title = new QLabel(report6);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(220, 60, 221, 31));
        label_title->setStyleSheet(QStringLiteral("font: 75 18pt \"Aharoni\";"));
        label_picture = new QLabel(report6);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(200, 100, 261, 201));
        label_picture->setStyleSheet(QStringLiteral(""));
        textBrowser = new QTextBrowser(report6);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 350, 631, 451));
        label = new QLabel(report6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 800, 501, 21));

        retranslateUi(report6);

        QMetaObject::connectSlotsByName(report6);
    } // setupUi

    void retranslateUi(QWidget *report6)
    {
        report6->setWindowTitle(QApplication::translate("report6", "Form", Q_NULLPTR));
        lineEdit_date->setText(QString());
        label_7->setText(QString());
        label_3->setText(QApplication::translate("report6", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_age->setText(QString());
        label_4->setText(QApplication::translate("report6", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("report6", "\344\275\223\346\243\200\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("report6", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_9->setText(QString());
        lineEdit_name->setText(QString());
        lineEdit_sex->setText(QString());
        label_title->setText(QString());
        label_picture->setText(QString());
        label->setText(QApplication::translate("report6", "                 \357\274\210\344\273\245\344\270\212\345\206\205\345\256\271\344\273\205\344\276\233\345\217\202\350\200\203\357\274\214\346\255\244\346\212\245\345\221\212\344\273\205\345\257\271\346\234\254\346\254\241\346\243\200\346\237\245\350\264\237\350\264\243\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class report6: public Ui_report6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT6_H
