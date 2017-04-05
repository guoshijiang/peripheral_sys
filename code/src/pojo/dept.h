#ifndef DEPT_H
#define DEPT_H
#include <QString>
#include <QList>
#include "pojo/check_item.h"


class dept
{
public:
    dept();
    QString deptName;
    QList<check_item> items;
    QString diagnose;
    QString docter;
    QString user;
    QString pre;
};

#endif // DEPT_H
