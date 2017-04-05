#ifndef REPORT5_H
#define REPORT5_H

#include <QWidget>
#include "parse_json.h"
#include "pojo/person.h"
#include <QStandardItemModel>
#include "pojo/dept.h"
#include "pojo/check_item.h"

namespace Ui {
class report5;
}

class report5 : public QWidget
{
    Q_OBJECT

public:
    explicit report5(QWidget *parent = 0);
    ~report5();
    void setTableData(int page);
    dept getArray(QString str);

private:
    Ui::report5 *ui;
    parse_json *par;
    QList<dept> depts;
    int count=0;
    void setUserInfo();

};

#endif // REPORT5_H
