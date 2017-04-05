#ifndef CHECKUP_PICTURE_H
#define CHECKUP_PICTURE_H
#include <QString>
#include <QList>

class checkup_picture
{
public:
    checkup_picture();
    QString checkup_pic_name;
    QString checkup_pic_result;
    QList<QString> checkup_pic_img;
};

#endif // CHECKUP_PICTURE_H
