#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T13:14:48
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += webview
QT += webenginewidgets
QT += printsupport
#QT += webkitwidgets


TARGET = di_an_tool
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    mainWindow/mainwindow.cpp \
    dbLogin/login.cpp \
    browser/webpopupwindow.cpp \
    browser/webview.cpp \
    browser/webpage.cpp \
    browser/urllineedit.cpp \
    browser/tabwidget.cpp \
    browser/browserwindow.cpp \
    browser/browser.cpp \
    userLogin/userlogin.cpp \
    printer/d_printer.cpp \
    report/examination_report.cpp \
    report/examination_login.cpp \
    report/report1.cpp \
    report/report2.cpp \
    report/report3.cpp \
    report/report4.cpp \
    report/report5.cpp \
    report/report6.cpp \
    pojo/person.cpp \
    pojo/info.cpp \
    pojo/sales.cpp \
    parse_json.cpp \
    pojo/health_status.cpp \
    pojo/check_item.cpp \
    pojo/dept.cpp \
    pojo/specs.cpp \
    pojo/final.cpp \
    pojo/checkup_picture.cpp \
    pojo/items_picture.cpp \
    pojo/images.cpp \
    button.cpp \
    config_file.cpp \
    date_time.cpp \
    handle_path.cpp \
    write_log.cpp \
    pojo/databases.cpp



HEADERS  += mainWindow/mainwindow.h \
    dbLogin/login.h \
    browser/browser.h \
    browser/browserwindow.h \
    browser/tabwidget.h \
    browser/urllineedit.h \
    browser/webview.h \
    browser/webpage.h \
    browser/webpopupwindow.h \
    userLogin/userlogin.h \
    printer/d_printer.h \
    report/examination_report.h \
    report/examination_login.h \
    report/report1.h \
    report/report2.h \
    report/report3.h \
    report/report4.h \
    report/report5.h \
    report/report6.h \
    pojo/person.h \
    pojo/info.h \
    pojo/sales.h \
    parse_json.h \
    pojo/health_status.h \
    pojo/check_item.h \
    pojo/dept.h \
    pojo/specs.h \
    pojo/final.h \
    pojo/checkup_picture.h \
    pojo/items_picture.h \
    pojo/images.h \
    button.h \
    E:/di_an_tool/src/pojo/database.h \
    config_file.h \
    date_time.h \
    handle_path.h \
    write_log.h \
    pojo/databases.h



FORMS    += mainwindow.ui \
    login.ui \
    userlogin.ui \
    d_printer.ui \
    examination_report.ui \
    examination_login.ui  \
    passworddialog.ui  \
    certificateerrordialog.ui \
    report1.ui \
    report2.ui \
    report3.ui \
    report4.ui \
    report5.ui \
    report6.ui \
    button.ui

RESOURCES += \
    picture_source.qrc

DISTFILES += \
    ../../Downloads/timg (1).jpg \
    picture/preview2.jpg
