#ifndef PARSE_JSON_H
#define PARSE_JSON_H
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QByteArray>
#include "qdebug.h"
#include "pojo/sales.h"
#include "pojo/info.h"
#include "pojo/person.h"
#include <QList>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <string.h>
#include <QEventLoop>
#include "pojo/health_status.h"
#include "pojo/check_item.h"
#include "pojo/dept.h"
#include "pojo/specs.h"
#include "pojo/final.h"
#include "pojo/checkup_picture.h"
#include "pojo/items_picture.h"
#include "pojo/images.h"

class parse_json :public QObject
{
    Q_OBJECT
public:
    parse_json();
    QByteArray getBackData(QString str);
    QByteArray getIcon(QString str);
    QNetworkAccessManager * m_netMan;
    QByteArray byteArray;
    QByteArray byteArray1;
    QJsonParseError jsonError;
    QJsonDocument document;
    QString getText();
    person getPersonData();
    info getInfoData();
    QList<sales> getSaleData();
    QList<health> getHealthData();
    QList<dept> getDeptData();
    QList<specs> getSpecsData();
    final getFinalData();
    QList<images> getImagesData();

private slots:

};

#endif // PARSE_JSON_H
