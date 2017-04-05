/********************************************************************************
** Form generated from reading UI file 'report2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT2_H
#define UI_REPORT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report2
{
public:
    QLabel *label_7;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *report2)
    {
        if (report2->objectName().isEmpty())
            report2->setObjectName(QStringLiteral("report2"));
        report2->resize(681, 835);
        label_7 = new QLabel(report2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 10, 641, 111));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index.png);"));
        label = new QLabel(report2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 140, 531, 51));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(report2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 190, 541, 628));

        retranslateUi(report2);

        QMetaObject::connectSlotsByName(report2);
    } // setupUi

    void retranslateUi(QWidget *report2)
    {
        report2->setWindowTitle(QApplication::translate("report2", "Form", Q_NULLPTR));
        label_7->setText(QString());
        label->setText(QApplication::translate("report2", "              \346\202\250\346\234\254\346\254\241\345\256\232\345\210\266\347\232\204\344\275\223\346\243\200\345\245\227\351\244\220\351\241\271\347\233\256\346\230\216\347\273\206\357\274\210\344\276\233\345\217\202\351\230\205\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class report2: public Ui_report2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT2_H
