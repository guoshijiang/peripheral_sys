#ifndef EXAMINATION_REPORT_H
#define EXAMINATION_REPORT_H

#include <QWidget>
#include <QSqlQueryModel>
#include "dbLogin/login.h"
#include "examination_login.h"
#include <QPushButton>
#include "report/report1.h"
#include "report/report2.h"
#include "report/report3.h"
#include "report/report4.h"
#include "report/report5.h"
#include "report/report6.h"
#include "parse_json.h"
#include "pojo/specs.h"
#include "pojo/images.h"

namespace Ui {
class examination_report;
}

class examination_report : public QWidget
{
    Q_OBJECT

public:
    explicit examination_report(QWidget *parent = 0);
    ~examination_report();

private slots:

    void createToolbar();

    void on_pushButton_next_clicked();

    void on_pushButton_last_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_first_clicked();

    void on_pushButton_print_clicked();

    void on_pushButton_end_clicked();

private:
    Ui::examination_report *ui;
    QSqlQueryModel *model3;
    login *l;
    QPushButton *selectbutton;
    QPushButton *printbutton;
    QPushButton *backbutton;
    report1 *r1;
    report2 *r2;
    report3 *r3;
    report4 *r4;
    report5 *r5;
    report6 *r6;
    QList<sales> saless;
    QList<dept> depts;
    parse_json *p_json;
    QList<images> imagess;
};

#endif // EXAMINATION_REPORT_H
