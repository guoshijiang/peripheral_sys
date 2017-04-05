#include "report/report2.h"
#include "ui_report2.h"
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include "report/examination_login.h"
#include "pojo/sales.h"
#include "qdebug.h"
#pragma execution_character_set("utf-8")

report2::report2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report2)
{
    ui->setupUi(this);
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(216, 236, 224)}");
    ui->tableView->verticalHeader()->hide();
}

report2::~report2()
{
    delete ui;
}

void report2::getData(int page){
    parse_json *p_json=new parse_json();
    QList<sales> saless=p_json->getSaleData();
    int pages=saless.size()/20+2;
    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderItem(0, new QStandardItem("科室项目"));
    model->setHorizontalHeaderItem(1, new QStandardItem("项目名称"));
    model->setHorizontalHeaderItem(2, new QStandardItem("检查状态"));
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    if(saless.size()<20){
        for(int i=0;i<saless.size();i++){
            QList<QStandardItem *> items;
            items.append(new QStandardItem(saless[i].checkup_name));
            items.append(new QStandardItem(saless[i].department_name));
            if(saless[i].checkup_status=="0"){
                saless[i].checkup_status="未检查";
            }else if(saless[i].checkup_status=="1"){
                saless[i].checkup_status="检查中";
            }else if(saless[i].checkup_status=="2"){
                saless[i].checkup_status="完成检查";
            }else if(saless[i].checkup_status=="3"){
                saless[i].checkup_status="放弃检查";
            }else if(saless[i].checkup_status=="4"){
                saless[i].checkup_status="等待检查";
            }
            items.append(new QStandardItem(saless[i].checkup_status));
            model->insertRow(i,items);
        }
    }else{
        if(page==pages){
            for(int i=(page-2)*20;i<saless.size();i++){
                QList<QStandardItem *> items;
                if(saless[i].checkup_status=="0"){
                    saless[i].checkup_status="未检查";
                }else if(saless[i].checkup_status=="1"){
                    saless[i].checkup_status="检查中";
                }else if(saless[i].checkup_status=="2"){
                    saless[i].checkup_status="完成检查";
                }else if(saless[i].checkup_status=="3"){
                    saless[i].checkup_status="放弃检查";
                }else if(saless[i].checkup_status=="4"){
                    saless[i].checkup_status="等待检查";
                }
                items.append(new QStandardItem(saless[i].checkup_name));
                items.append(new QStandardItem(saless[i].department_name));
                items.append(new QStandardItem(saless[i].checkup_status));
                int c=0;
                model->insertRow(c++,items);
            }
        }else{
            for(int i=(page-2)*20;i<20;i++){
                QList<QStandardItem *> items;
                if(saless[i].checkup_status=="0"){
                    saless[i].checkup_status="未检查";
                }else if(saless[i].checkup_status=="1"){
                    saless[i].checkup_status="检查中";
                }else if(saless[i].checkup_status=="2"){
                    saless[i].checkup_status="完成检查";
                }else if(saless[i].checkup_status=="3"){
                    saless[i].checkup_status="放弃检查";
                }else if(saless[i].checkup_status=="4"){
                    saless[i].checkup_status="等待检查";
                }
                items.append(new QStandardItem(saless[i].checkup_name));
                items.append(new QStandardItem(saless[i].department_name));
                items.append(new QStandardItem(saless[i].checkup_status));
                model->insertRow(i,items);
            }
        }

    }
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(0,150);
}
