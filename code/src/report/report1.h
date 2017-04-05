#ifndef REPORT1_H
#define REPORT1_H

#include <QWidget>
#include "parse_json.h"

namespace Ui {
class report1;
}

class report1 : public QWidget
{
    Q_OBJECT

public:
    explicit report1(QWidget *parent = 0);
    ~report1();

private:
    Ui::report1 *ui;
     parse_json *p_json;
     person p;
     void setPersonInfo();
};

#endif // REPORT1_H
