#ifndef QDATE_TIME_H
#define QDATE_TIME_H
#include <QDateTime>
class Qdate_time{
public:
   Qdate_time();
    ~Qdate_time();
    QString Qdate_time_day();
    QString Qdate_time_sec();
private:
    QDateTime  m_datetime;
    QString m_str_time;
};

#endif
