/********************************************************************************
** Form generated from reading UI file 'd_printer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D_PRINTER_H
#define UI_D_PRINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d_printer
{
public:
    QTextEdit *textEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *d_printer)
    {
        if (d_printer->objectName().isEmpty())
            d_printer->setObjectName(QStringLiteral("d_printer"));
        d_printer->resize(1175, 812);
        textEdit = new QTextEdit(d_printer);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(110, 120, 104, 71));
        scrollArea = new QScrollArea(d_printer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 80, 681, 721));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 719));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->raise();
        textEdit->raise();

        retranslateUi(d_printer);

        QMetaObject::connectSlotsByName(d_printer);
    } // setupUi

    void retranslateUi(QWidget *d_printer)
    {
        d_printer->setWindowTitle(QApplication::translate("d_printer", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class d_printer: public Ui_d_printer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D_PRINTER_H
