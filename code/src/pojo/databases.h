#ifndef DATABASES_H
#define DATABASES_H
#include <QString>


class databases
{
public:
    databases();
public:
    QString m_ip;
    QString m_port;
    QString m_dbname;
    QString m_user;
    QString m_passwd;
};

#endif
