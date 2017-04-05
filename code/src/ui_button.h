/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_button
{
public:
    QPushButton *pushButton_preview;
    QPushButton *pushButton_print;

    void setupUi(QWidget *button)
    {
        if (button->objectName().isEmpty())
            button->setObjectName(QStringLiteral("button"));
        button->resize(407, 358);
        pushButton_preview = new QPushButton(button);
        pushButton_preview->setObjectName(QStringLiteral("pushButton_preview"));
        pushButton_preview->setGeometry(QRect(20, 10, 31, 27));
        pushButton_preview->setStyleSheet(QStringLiteral(""));
        pushButton_print = new QPushButton(button);
        pushButton_print->setObjectName(QStringLiteral("pushButton_print"));
        pushButton_print->setGeometry(QRect(80, 10, 31, 27));
        pushButton_print->setStyleSheet(QStringLiteral(""));

        retranslateUi(button);

        QMetaObject::connectSlotsByName(button);
    } // setupUi

    void retranslateUi(QWidget *button)
    {
        button->setWindowTitle(QApplication::translate("button", "Form", Q_NULLPTR));
        pushButton_preview->setText(QString());
        pushButton_print->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class button: public Ui_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
