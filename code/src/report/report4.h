#ifndef REPORT4_H
#define REPORT4_H

#include <QWidget>
#include "parse_json.h"
#include "pojo/person.h"
#include "pojo/specs.h"
#include "pojo/final.h"
#include <QPixmap>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QUrl>
#include <QByteArray>

namespace Ui {
class report4;
}

class report4 : public QWidget
{
    Q_OBJECT

public:
    explicit report4(QWidget *parent = 0);
    ~report4();
    int returnPageCount();
    void setCheckInfo(int page);

private slots:
    void setPersonInfo();
    void setSignIcon();
    int calculateCount(QString str);


private:
    Ui::report4 *ui;
    parse_json *par;
    person p;
    QList<QString> strs;
    QNetworkAccessManager *m_netMa;
    final fina;
};

#endif // REPORT4_H
