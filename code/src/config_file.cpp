#include "config_file.h"
#pragma execution_character_set("utf-8")

QByteArray m_json_bytes;

Qconfig_file::Qconfig_file()
{
    Qhandle_path qhp;
    m_etc_path = qhp.Qget_etc_path();
    QFile file(m_etc_path);
    m_bl = file.open(QIODevice::ReadOnly);
    if(!m_bl)
    {
        return ;
    }
    m_json_bytes = file.readAll();
    file.close();
}

Qconfig_file::~Qconfig_file()
{

}

databases Qconfig_file::get_db_info()
{
    databases db =databases();
    m_document = QJsonDocument::fromJson(m_json_bytes,&m_json_err);
    if(!m_document.isNull() && (m_json_err.error == QJsonParseError::NoError))
    {
        if(m_document.isObject())
        {
            QJsonObject object = m_document.object();
            if(object.contains("config"))
            {
                QJsonValue value = object.value("config");
                QJsonArray array = value.toArray();
                for(int i=0;i<array.size();i++)
                {
                    QJsonObject object = array.at(i).toObject();
                    QJsonValue value=object.value("maintain");
                    QJsonObject object1 = value.toArray().at(0).toObject();
                    QJsonValue value1 = object1.value("db");
                    QJsonObject object2 = value1.toObject();
                    QJsonValue ip = object2.value("ip");
                    db.m_ip = ip.toString();
                    QJsonValue port = object2.value("port");
                    db.m_port = port.toString();
                    QJsonValue dbname = object2.value("dbname");
                    db.m_dbname = dbname.toString();
                    QJsonValue user = object2.value("user");
                    db.m_user = user.toString();
                    QJsonValue passwd = object2.value("passwd");
                    db.m_passwd = passwd.toString();
                }
            }
        }
    }
    return db;
}


QString Qconfig_file::get_http_url()
{
    m_document = QJsonDocument::fromJson(m_json_bytes,&m_json_err);
    if(!m_document.isNull() && (m_json_err.error == QJsonParseError::NoError))
    {
        if(m_document.isObject())
        {
            QJsonObject object = m_document.object();
            if(object.contains("config"))
            {
                QJsonValue value = object.value("config");
                QJsonArray array = value.toArray();
                for(int i=0;i<array.size();i++)
                {
                    QJsonObject object = array.at(i).toObject();
                    QJsonValue value=object.value("report");
                    QJsonObject object1 = value.toArray().at(0).toObject();
                    QJsonValue value1 = object1.value("url");
                    m_url = value1.toString();
                }
            }
        }
    }
    return m_url;
}
