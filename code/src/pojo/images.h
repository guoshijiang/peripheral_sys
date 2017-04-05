#ifndef IMAGES_H
#define IMAGES_H
#include <QString>
#include "pojo/checkup_picture.h"
#include "pojo/items_picture.h"

class images
{
public:
    images();
    checkup_picture m_checkup_pic;
    QList<items_picture> m_items_pic;
};

#endif // IMAGES_H
