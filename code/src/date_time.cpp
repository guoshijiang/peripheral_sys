#include "date_time.h"

Qdate_time::Qdate_time()
{

}

Qdate_time::~Qdate_time()
{

}

QString Qdate_time::Qdate_time_day()
{
   m_datetime = QDateTime::currentDateTime();
   m_str_time = m_datetime.toString("yyyyMMdd");
   return m_str_time;
}

QString Qdate_time::Qdate_time_sec()
{
    m_datetime = QDateTime::currentDateTime();
    m_str_time = m_datetime.toString("yyyy-MM-dd hh:mm:ss");
    return m_str_time;
}

