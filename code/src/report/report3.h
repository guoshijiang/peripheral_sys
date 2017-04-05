#ifndef REPORT3_H
#define REPORT3_H

#include <QWidget>
#include "parse_json.h"
#include "pojo/person.h"
#include "pojo/health_status.h"

namespace Ui {
class report3;
}

class report3 : public QWidget
{
    Q_OBJECT

public:
    explicit report3(QWidget *parent = 0);
    ~report3();
private slots:
    void setJwsStatus();
    void setJzbsStatus();
    void setTjqkStatus();
    void setJwtjycqkStatus();
    void setPersonInfo();

private:
    Ui::report3 *ui;
     QList<health> hea;
     parse_json *par;
     person p;
};

#endif // REPORT3_H
