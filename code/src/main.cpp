#include"dbLogin/login.h"
#include <QApplication>
#include<qdebug.h>
#include<QtSql/QSqlDatabase>
#include<QTextStream>
#include<QString>
#include<QFile>
#include "browser/browser.h"
#include "browser/browserwindow.h"
#include <QWebEngineSettings>
#include<QMutex>
#include<QSysInfo>
#include<QDir>
#include "parse_json.h"
#include "write_log.h"
#include "config_file.h"
#include "handle_path.h"
#include <QDir>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{ 
    Qwrite_log qwl;
    qwl.save_file_log(2,LOG_DEBUG, "aaa");
    qwl.save_file_log(1,LOG_DEBUG, "bbbb");
    QApplication::addLibraryPath("./plugins");
    Qconfig_file qff;
    qDebug() << qff.get_http_url();

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    BrowserWindow *window = new BrowserWindow();
    Browser::instance().addWindow(window);
    window->loadPage("http://www.bjdaos.com");
    return a.exec();
}

