#include "handle_path.h"

Qhandle_path::Qhandle_path()
{
    QString c_str_path = QDir::currentPath();
    QStringList path_list = c_str_path.split('/');
    m_dir_path = path_list[0] + "/" + path_list[1] + "/";
}

Qhandle_path::~Qhandle_path()
{

}

QString Qhandle_path::Qget_log_path()
{
    m_log_path = m_dir_path;
    if (m_log_path.right(1) != "/")
    {
        m_log_path += "/";
    }
    m_log_path += "log/";

    QDir mDir(m_log_path);
    if (!mDir.exists())
    {
        mDir.mkpath(m_log_path);
    }
    return m_log_path;
}

QString Qhandle_path::Qget_etc_path()
{
    QString common_path = m_dir_path;
    m_getcon_path = common_path + "etc" + "/config.ini";
    return m_getcon_path;
}


