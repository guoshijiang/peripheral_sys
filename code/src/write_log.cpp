#include "write_log.h"
#pragma execution_character_set("utf-8")

Qwrite_log::Qwrite_log()
{

}

Qwrite_log::~Qwrite_log()
{

}

void Qwrite_log::print_log(LOGLEVEL level, const char *msg,  ...)
{
    if (level < m_log_level)
    {
        return;
    }
    char log_buffer[8192] = {0};
    va_list vl_fmt;
    va_start(vl_fmt, msg);
    vsprintf(log_buffer, msg, vl_fmt);
    va_end(vl_fmt);

    QString file_time = "";
    QString log_time = "";
    QString log_level = get_level_str(level);
    Qdate_time qtime;
    file_time = qtime.Qdate_time_day();
    log_time = qtime.Qdate_time_sec();
    qDebug("[%s] [%s] {%s}", log_time.toStdString().c_str(), log_level.toStdString().c_str(), log_buffer);
}

void Qwrite_log::save_file_log(int TY, LOGLEVEL level, const char *msg,  ...)
{
    if (level < m_log_level)
    {
       return;
    }
    char log_buffer[8192] = {0};
    va_list vl_fmt;
    va_start(vl_fmt, msg);
    vsprintf(log_buffer, msg, vl_fmt);
    va_end(vl_fmt);

    QString log_time = "";
    QString file_time = "";
    Qdate_time qtime;
    Qhandle_path qhp;
    QString m_log_path = qhp.Qget_log_path();
    file_time = qtime.Qdate_time_day();
    log_time = qtime.Qdate_time_sec();
    QString log_level = get_level_str(level);
    QString log_file = m_log_path;
    if(TY == 1)
    {
        log_file += file_time;
        log_file += "_SYS";
        log_file += ".log";
        QFile file(log_file);
        file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);
        out << log_time << " [" << log_level << "] " << "{" << log_buffer << "}" << endl;
        file.close();

    }
    else if(TY == 2)
    {
        log_file += file_time;
        log_file += "_TRADE";
        log_file += ".log";
        QFile file(log_file);
        file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);
        out << log_time << " [" << log_level << "] " << "{" << log_buffer << "}" << endl;
        file.close();
    }
    else
    {
       return;
    }
}

QString Qwrite_log::get_level_str(LOGLEVEL level)
{
    switch(level)
    {
        case LOG_DEBUG:
            return "LOG_DEBUG";
            break;
        case LOG_INFO:
            return "LOG_INFO";
            break;
        case LOG_WARN:
            return "LOG_WARN";
            break;
        case LOG_ERROR:
            return "LOG_ERROR";
            break;
        default:
            break;
    }
}

void Qwrite_log::set_Log_level(LOGLEVEL log_level)
{
    m_log_level = log_level;
}
