/********************************************************************************
** Form generated from reading UI file 'examination_report.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINATION_REPORT_H
#define UI_EXAMINATION_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_examination_report
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *lineEdit;
    QPushButton *pushButton_first;
    QPushButton *pushButton_last;
    QPushButton *pushButton_next;
    QPushButton *pushButton_end;
    QPushButton *pushButton_print;
    QLabel *label_2;
    QLabel *label_pageNum;
    QLabel *label;

    void setupUi(QWidget *examination_report)
    {
        if (examination_report->objectName().isEmpty())
            examination_report->setObjectName(QStringLiteral("examination_report"));
        examination_report->resize(682, 900);
        examination_report->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        scrollArea = new QScrollArea(examination_report);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(-1, 29, 681, 871));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 869));
        scrollArea->setWidget(scrollAreaWidgetContents);
        lineEdit = new QLineEdit(examination_report);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 0, 31, 20));
        pushButton_first = new QPushButton(examination_report);
        pushButton_first->setObjectName(QStringLiteral("pushButton_first"));
        pushButton_first->setGeometry(QRect(0, 0, 51, 23));
        pushButton_last = new QPushButton(examination_report);
        pushButton_last->setObjectName(QStringLiteral("pushButton_last"));
        pushButton_last->setGeometry(QRect(60, 0, 61, 23));
        pushButton_next = new QPushButton(examination_report);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(210, 0, 61, 23));
        pushButton_end = new QPushButton(examination_report);
        pushButton_end->setObjectName(QStringLiteral("pushButton_end"));
        pushButton_end->setGeometry(QRect(280, 0, 51, 23));
        pushButton_print = new QPushButton(examination_report);
        pushButton_print->setObjectName(QStringLiteral("pushButton_print"));
        pushButton_print->setGeometry(QRect(340, 0, 75, 23));
        label_2 = new QLabel(examination_report);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 0, 16, 21));
        label_pageNum = new QLabel(examination_report);
        label_pageNum->setObjectName(QStringLiteral("label_pageNum"));
        label_pageNum->setGeometry(QRect(180, 0, 21, 20));
        label = new QLabel(examination_report);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 0, 211, 81));

        retranslateUi(examination_report);

        QMetaObject::connectSlotsByName(examination_report);
    } // setupUi

    void retranslateUi(QWidget *examination_report)
    {
        examination_report->setWindowTitle(QApplication::translate("examination_report", "examination_report", Q_NULLPTR));
        pushButton_first->setText(QApplication::translate("examination_report", "\351\246\226\351\241\265", Q_NULLPTR));
        pushButton_last->setText(QApplication::translate("examination_report", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("examination_report", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_end->setText(QApplication::translate("examination_report", "\346\234\253\351\241\265", Q_NULLPTR));
        pushButton_print->setText(QApplication::translate("examination_report", "\346\234\254\345\234\260\346\211\223\345\215\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("examination_report", "/", Q_NULLPTR));
        label_pageNum->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class examination_report: public Ui_examination_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINATION_REPORT_H
