#ifndef EXAMINATION_LOGIN_H
#define EXAMINATION_LOGIN_H

#include <QWidget>
#include "examination_report.h"
#include "pojo/person.h"
#include "pojo/info.h"
#include "pojo/sales.h"
#include "parse_json.h"
#include <QStandardItem>
#include <QStandardItemModel>
#include <QCheckBox>
#include <QModelIndex>

namespace Ui {
class examination_login;
}

class examination_login : public QWidget
{
    Q_OBJECT

public:
    explicit examination_login(QWidget *parent = 0);
    ~examination_login();
    QString getText();


private slots:
     void on_pushButton_lookInfo_clicked();
     void setTableData();
     void allCheck();
  //   Qt::ItemFlags flags(const QModelIndex &index) const;
   //  QVariant data( const QModelIndex &index, int role )const;

private:
    Ui::examination_login *ui;
    QList<QCheckBox *> checkboxs;
};

#endif // EXAMINATION_LOGIN_H
