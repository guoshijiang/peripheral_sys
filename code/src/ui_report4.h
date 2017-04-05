/********************************************************************************
** Form generated from reading UI file 'report4.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT4_H
#define UI_REPORT4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report4
{
public:
    QLabel *label_examine;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_sex;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_date;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_context;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_context_3;
    QLabel *label_advice;
    QLabel *label_context_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_doctor;
    QLabel *label_sign;
    QLabel *label;
    QLabel *label_name;
    QLabel *label_date;

    void setupUi(QWidget *report4)
    {
        if (report4->objectName().isEmpty())
            report4->setObjectName(QStringLiteral("report4"));
        report4->resize(681, 828);
        label_examine = new QLabel(report4);
        label_examine->setObjectName(QStringLiteral("label_examine"));
        label_examine->setGeometry(QRect(10, 170, 661, 31));
        label_examine->setStyleSheet(QLatin1String("font: 75 12pt \"Aharoni\";\n"
"\n"
"background-color: rgb(216, 236, 224);"));
        label_3 = new QLabel(report4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 31, 41));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(report4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 20, 31, 41));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(report4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 20, 31, 41));
        label_5->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(report4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 20, 61, 41));
        label_6->setStyleSheet(QStringLiteral(""));
        lineEdit_name = new QLineEdit(report4);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(50, 30, 51, 20));
        lineEdit_sex = new QLineEdit(report4);
        lineEdit_sex->setObjectName(QStringLiteral("lineEdit_sex"));
        lineEdit_sex->setGeometry(QRect(150, 30, 31, 20));
        lineEdit_age = new QLineEdit(report4);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(220, 30, 31, 20));
        lineEdit_date = new QLineEdit(report4);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(320, 31, 161, 20));
        label_7 = new QLabel(report4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 30, 201, 31));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index3.png);"));
        label_9 = new QLabel(report4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 70, 681, 16));
        label_9->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index4.png);"));
        label_2 = new QLabel(report4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 581, 41));
        label_8 = new QLabel(report4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 760, 651, 61));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index2.png);"));
        layoutWidget = new QWidget(report4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 210, 671, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_context = new QLabel(layoutWidget);
        label_context->setObjectName(QStringLiteral("label_context"));
        label_context->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_context);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_context_3 = new QLabel(layoutWidget);
        label_context_3->setObjectName(QStringLiteral("label_context_3"));
        label_context_3->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_context_3);

        label_advice = new QLabel(layoutWidget);
        label_advice->setObjectName(QStringLiteral("label_advice"));
        label_advice->setStyleSheet(QLatin1String("font: 75 12pt \"Aharoni\";\n"
"\n"
"background-color: rgb(216, 236, 224);"));

        verticalLayout->addWidget(label_advice);

        label_context_2 = new QLabel(layoutWidget);
        label_context_2->setObjectName(QStringLiteral("label_context_2"));
        label_context_2->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_context_2);

        layoutWidget1 = new QWidget(report4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(360, 690, 311, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_doctor = new QLabel(layoutWidget1);
        label_doctor->setObjectName(QStringLiteral("label_doctor"));

        horizontalLayout->addWidget(label_doctor);

        label_sign = new QLabel(layoutWidget1);
        label_sign->setObjectName(QStringLiteral("label_sign"));
        label_sign->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_sign);

        label = new QLabel(report4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 110, 41, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_name = new QLabel(report4);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(80, 110, 51, 21));
        label_name->setStyleSheet(QStringLiteral(""));
        label_date = new QLabel(report4);
        label_date->setObjectName(QStringLiteral("label_date"));
        label_date->setGeometry(QRect(180, 110, 121, 21));
        label_date->setStyleSheet(QStringLiteral(""));
        layoutWidget->raise();
        layoutWidget->raise();
        label_examine->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_name->raise();
        lineEdit_sex->raise();
        lineEdit_age->raise();
        lineEdit_date->raise();
        label_7->raise();
        label_9->raise();
        label_2->raise();
        label_8->raise();
        label->raise();
        label_name->raise();
        label_date->raise();

        retranslateUi(report4);

        QMetaObject::connectSlotsByName(report4);
    } // setupUi

    void retranslateUi(QWidget *report4)
    {
        report4->setWindowTitle(QApplication::translate("report4", "Form", Q_NULLPTR));
        label_examine->setText(QApplication::translate("report4", "                                                                        \346\243\200\346\237\245\347\273\274\350\277\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("report4", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("report4", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("report4", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("report4", "\344\275\223\346\243\200\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        lineEdit_name->setText(QString());
        lineEdit_sex->setText(QString());
        lineEdit_age->setText(QString());
        lineEdit_date->setText(QString());
        label_7->setText(QString());
        label_9->setText(QString());
        label_2->setText(QApplication::translate("report4", "                  \357\274\214\347\216\260\345\260\206\346\202\250                     \347\232\204\344\275\223\346\243\200\347\273\223\346\236\234\346\261\207\346\200\273\345\210\206\346\236\220\345\246\202\344\270\213\357\274\214\350\257\267\346\202\250\350\256\244\347\234\237\351\230\205\350\257\273\343\200\202", Q_NULLPTR));
        label_8->setText(QString());
        label_context->setText(QString());
        label_context_3->setText(QString());
        label_advice->setText(QApplication::translate("report4", "                                                                        \346\200\273\347\233\221\346\204\217\350\247\201", Q_NULLPTR));
        label_context_2->setText(QString());
        label_doctor->setText(QApplication::translate("report4", "\346\200\273\346\243\200\345\214\273\347\224\237\357\274\232", Q_NULLPTR));
        label_sign->setText(QString());
        label->setText(QApplication::translate("report4", "\345\260\212\346\225\254\347\232\204", Q_NULLPTR));
        label_name->setText(QString());
        label_date->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class report4: public Ui_report4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT4_H
