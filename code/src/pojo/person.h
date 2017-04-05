#ifndef PERSON_H
#define PERSON_H
#include <QString>
//#pragma execution_character_set("utf-8")

class person
{
public:
    person();
    QString examination_no;
        QString checkup_date;
        QString image_url;
        QString name;
        qint8 sex;
        QString birthday;
        qint8 age;
        QString nation;
        bool married;
        QString email;
        QString address;
        QString cellphone;
        QString phone;
        QString enterprise;
        QString card_no;
};

#endif // PERSON_H
