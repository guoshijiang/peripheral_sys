#ifndef REPORT2_H
#define REPORT2_H

#include <QWidget>
#include "parse_json.h"

namespace Ui {
class report2;
}

class report2 : public QWidget
{
    Q_OBJECT

public:
    explicit report2(QWidget *parent = 0);
    ~report2();
    void getData(int page);

private slots:


private:
    Ui::report2 *ui;
};

#endif // REPORT2_H
