#ifndef REPORT6_H
#define REPORT6_H

#include <QWidget>
#include "parse_json.h"
#include "pojo/person.h"
#include "pojo/checkup_picture.h"
#include "pojo/items_picture.h"
#include "pojo/images.h"
#include <QByteArray>
#include <QPixmap>
#include <QFont>

namespace Ui {
class report6;
}

class report6 : public QWidget
{
    Q_OBJECT

public:
    explicit report6(QWidget *parent = 0);
    ~report6();
    void setPictureAndText(int page);

private:
    Ui::report6 *ui;
    void setUserInfo();
    parse_json *par1;
    QFont font;
    QList<images> imagess;
};

#endif // REPORT6_H
