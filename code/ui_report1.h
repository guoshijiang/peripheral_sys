/********************************************************************************
** Form generated from reading UI file 'report1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT1_H
#define UI_REPORT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report1
{
public:
    QFrame *frame;
    QLabel *label_picture;
    QTextEdit *textEdit;
    QLabel *label_7;
    QLabel *label_name;
    QLabel *label_sex;
    QLabel *label_date;
    QLabel *label_id;
    QLabel *label_company;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_sex;
    QLineEdit *lineEdit_date;
    QLineEdit *lineEdit_company;
    QLineEdit *lineEdit_style;
    QLineEdit *lineEdit_id;
    QLabel *label_style;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *lineEdit_name_2;

    void setupUi(QWidget *report1)
    {
        if (report1->objectName().isEmpty())
            report1->setObjectName(QStringLiteral("report1"));
        report1->resize(681, 835);
        frame = new QFrame(report1);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 681, 841));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_picture = new QLabel(frame);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(490, 150, 111, 131));
        label_picture->setStyleSheet(QStringLiteral(""));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 300, 501, 461));
        textEdit->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 10, 641, 111));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index.png);"));
        label_name = new QLabel(frame);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(90, 140, 71, 20));
        label_sex = new QLabel(frame);
        label_sex->setObjectName(QStringLiteral("label_sex"));
        label_sex->setGeometry(QRect(90, 170, 61, 20));
        label_date = new QLabel(frame);
        label_date->setObjectName(QStringLiteral("label_date"));
        label_date->setGeometry(QRect(90, 200, 71, 20));
        label_id = new QLabel(frame);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(90, 230, 71, 20));
        label_company = new QLabel(frame);
        label_company->setObjectName(QStringLiteral("label_company"));
        label_company->setGeometry(QRect(90, 260, 61, 20));
        lineEdit_name = new QLineEdit(frame);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(160, 140, 113, 21));
        lineEdit_sex = new QLineEdit(frame);
        lineEdit_sex->setObjectName(QStringLiteral("lineEdit_sex"));
        lineEdit_sex->setGeometry(QRect(160, 170, 113, 21));
        lineEdit_date = new QLineEdit(frame);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(160, 200, 111, 21));
        lineEdit_company = new QLineEdit(frame);
        lineEdit_company->setObjectName(QStringLiteral("lineEdit_company"));
        lineEdit_company->setGeometry(QRect(160, 260, 301, 21));
        lineEdit_style = new QLineEdit(frame);
        lineEdit_style->setObjectName(QStringLiteral("lineEdit_style"));
        lineEdit_style->setGeometry(QRect(350, 200, 113, 20));
        lineEdit_id = new QLineEdit(frame);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(160, 230, 301, 21));
        label_style = new QLabel(frame);
        label_style->setObjectName(QStringLiteral("label_style"));
        label_style->setGeometry(QRect(280, 200, 61, 20));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 140, 191, 31));
        label_10->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index3.png);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 770, 651, 61));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/new/picture/index2.png);"));
        lineEdit_name_2 = new QLineEdit(frame);
        lineEdit_name_2->setObjectName(QStringLiteral("lineEdit_name_2"));
        lineEdit_name_2->setGeometry(QRect(160, 300, 81, 21));
        lineEdit_name_2->setStyleSheet(QStringLiteral("font: 75 11pt \"Aharoni\";"));
        label_picture->raise();
        textEdit->raise();
        label_name->raise();
        label_sex->raise();
        label_date->raise();
        label_id->raise();
        label_company->raise();
        lineEdit_name->raise();
        lineEdit_sex->raise();
        lineEdit_date->raise();
        lineEdit_company->raise();
        lineEdit_style->raise();
        lineEdit_id->raise();
        label_style->raise();
        label_7->raise();
        label_10->raise();
        label_8->raise();
        lineEdit_name_2->raise();

        retranslateUi(report1);

        QMetaObject::connectSlotsByName(report1);
    } // setupUi

    void retranslateUi(QWidget *report1)
    {
        report1->setWindowTitle(QApplication::translate("report1", "Form", Q_NULLPTR));
        label_picture->setText(QString());
        textEdit->setHtml(QApplication::translate("report1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\345\260\212\346\225\254\347\232\204		\345\245\263\345\243\253</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\"> \346\202\250\345\245\275\357\274\201</span><"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\"> \346\254\242\350\277\216\346\202\250\345\205\211\344\270\264\350\213\215\345\215\227\350\277\252\345\256\211\345\201\245\346\243\200\344\270\255\345\277\203\357\274\214\346\204\237\350\260\242\345\257\271\346\210\221\344\273\254\347\232\204\344\277\241\344\273\273\345\222\214\346\224\257\346\214\201\343\200\202\347\216\260\345\260\206\346\202\250\346\234\254\346\254\241\344\275\223\346\243\200\347\273\223</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\346\236\234\345\217\212\345\201\245\345\272\267\346\214\207\345\257\274\345\273\272\350\256\256\345\221\210\344\270\212\357\274\214\350\257\267\346\202\250\350\256\244\347\234\237\351\230\205\350\257\273\343\200\202</span></p>\n"
"<p style"
                        "=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    \346\234\254\346\254\241\344\275\223\346\243\200\347\273\223\346\236\234\344\273\205\344\276\233\345\217\202\350\200\203\357\274\214\344\270\215\344\275\234\350\257\201\346\230\216\344\271\213\347\224\250\357\274\214\344\270\224\351\231\220\345\216\237\346\240\267\346\234\254\347\273\223\350\256\272\343\200\202\345\246\202\346\202\250\345\257\271\344\275\223\346\243\200\347\273\223\346\236\234\345\222\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\346\210\221\344\273\254\347\232\204\345\273\272\350\256\256\346\234\211\347\226\221\351\227\256\357\274\214\350\257\267\346\202\250\346\235\245\351\231\242\346\210\226\350\207\264\347\224\265\345\201\245\345\272\267\345\222\250\350\257\242\351\203\250("
                        "\345\222\250\350\257\242\347\224\265\350\257\235\357\274\2320577-55566999)\357\274\214\346\210\221\344\273\254</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\345\260\206\345\256\211\346\216\222\350\265\204\346\267\261\344\270\223\345\256\266\344\270\272\346\202\250\344\275\234\350\257\246\347\273\206\350\247\243\347\255\224\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    \346\254\242\350\277\216\346\202\250\345\257\271\346\210\221\344\273\254\345\267\245\344\275\234\346\217\220\345\207\272\346\211\271\350\257\204\345\222\214\346\214\207\345\257\274\346\204\217\350\247\201\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">\345\201\245\345\272\267\344\270\223\345\256\266\346\214\207\345\257\274\346\204\217\350\247\201\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    1\343\200\20130\345\262\201\344\273\245\344\270\213\344\272\272\347\276\244\357\274\214\345\273\272\350\256\2562\345\271\264\344\270\200\346\254\241\345\201\245\345\272\267\344\275\223\346\243\200\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    2\343\200\20130~40\345\262\201\344\272\272\347\276\244\357"
                        "\274\2141~2\345\271\264\350\207\263\345\260\221\344\270\200\346\254\241\345\201\245\345\272\267\344\275\223\346\243\200\357\274\214\345\277\205\350\246\201\346\227\266\350\277\233\350\241\214\345\201\245\345\272\267\345\271\262\351\242\204\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    3\343\200\20141~60\345\262\201\344\272\272\347\276\244\357\274\214\346\257\217\345\271\264\350\207\263\345\260\221\344\270\200\346\254\241\346\267\261\345\272\246\344\275\223\346\243\200\357\274\214\345\220\214\346\227\266\350\277\233\350\241\214\345\277\205\350\246\201\347\232\204\345\201\245\345\272\267\347\256\241\347\220\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    4\343\200\20160\345\262\201\344\273\245\344"
                        "\270\212\344\272\272\347\276\244\357\274\214\346\257\217\345\271\264\344\270\244\346\254\241\346\267\261\345\272\246\344\275\223\346\243\200\357\274\214\345\220\214\346\227\266\350\277\233\350\241\214\345\205\250\351\235\242\345\201\245\345\272\267\347\256\241\347\220\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">    5\343\200\201\346\205\242\346\200\247\347\227\205\346\202\243\350\200\205\357\274\214\346\234\211\345\256\266\346\227\217\345\217\262\347\232\204\344\272\272\347\276\244\357\274\214\345\217\221\347\216\260\346\234\211\347\224\237\345\221\275\344\275\223\345\276\201\345\274\202\345\270\270\346\210\226\350\207\252\346\204\237\350\272\253\344\275\223\344\270\215\351\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'"
                        "; font-size:11pt;\">       \346\227\266\357\274\214\345\272\224\346\263\250\346\204\217\345\256\232\346\234\237\351\232\217\350\256\277\346\243\200\346\237\245\346\210\226\345\217\212\346\227\266\345\260\261\345\214\273\343\200\202 </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt;\">       \350\213\215\345\215\227\350\277\252\345\256\211\345\201\245\346\243\200\344\270\255\345\277\203\345\205\250\344\275\223\345\221\230\345\267\245\347\245\235\346\202\250\350\272\253\344\275\223\345"
                        "\201\245\345\272\267\357\274\214\345\256\266\345\272\255\345\271\270\347\246\217\347\276\216\346\273\241\357\274\201</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QString());
        label_name->setText(QApplication::translate("report1", "\345\247\223    \345\220\215\357\274\232 ", Q_NULLPTR));
        label_sex->setText(QApplication::translate("report1", "\346\200\247    \345\210\253\357\274\232   ", Q_NULLPTR));
        label_date->setText(QApplication::translate("report1", "\344\275\223\346\243\200\346\227\245\346\234\237\357\274\232         ", Q_NULLPTR));
        label_id->setText(QApplication::translate("report1", "\350\272\253\344\273\275\350\257\206\345\210\253\357\274\232           ", Q_NULLPTR));
        label_company->setText(QApplication::translate("report1", "\344\275\223\346\243\200\345\215\225\344\275\215\357\274\232       ", Q_NULLPTR));
        lineEdit_name->setText(QString());
        lineEdit_sex->setText(QString());
        lineEdit_date->setText(QString());
        lineEdit_company->setText(QString());
        lineEdit_id->setText(QString());
        label_style->setText(QApplication::translate("report1", " \351\242\206\345\217\226\346\226\271\345\274\217\357\274\232", Q_NULLPTR));
        label_10->setText(QString());
        label_8->setText(QString());
        lineEdit_name_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class report1: public Ui_report1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT1_H
