#ifndef WRITE_LOG_H
#define WRITE_LOG_H
#include <QString>
#include <QFile>
#include <QMutex>
#include "handle_path.h"
#include "date_time.h"
#define WRITE_LOG_ERR 1003  //写日志的时候发生错误
#define NO_LOG_ERR    1004

enum LOGLEVEL
{
    LOG_DEBUG = 0,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
};

class Qwrite_log{
    public:
        void print_log(LOGLEVEL level, const char* msg, ...);
        void save_file_log(int TY, LOGLEVEL level, const char* msg, ...);
        void set_Log_level(LOGLEVEL log_level);
        explicit Qwrite_log();
        ~Qwrite_log();
    private:
        QString m_log_path;
        LOGLEVEL m_log_level;
    private:
        QString get_level_str(LOGLEVEL level);
};
#endif // WRITE_LOG_H
