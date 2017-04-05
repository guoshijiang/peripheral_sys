#ifndef CONFIG_FILE_H
#define CONFIG_FILE_H
#include <QString>
#include <QByteArray>
#include <QList>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QByteArray>
#include "handle_path.h"
#include "pojo/databases.h"

class Qconfig_file
{
public:
    Qconfig_file();
    ~Qconfig_file();
    QFile m_file;
    databases get_db_info();
    QString get_http_url();
private:
    bool m_bl;
    QString m_etc_path;
    QString m_url;
    QJsonDocument m_document;
    QJsonParseError m_json_err;
};

#endif
