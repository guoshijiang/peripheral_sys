#include "report/examination_login.h"
#include "ui_examination_login.h"
#include "qdebug.h"
#include "report/examination_report.h"
#pragma execution_character_set("UTF-8")
#include <QStringList>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QAction>
#include "button.h"


examination_report *er;
QString text;
examination_login::examination_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::examination_login)
{
    ui->setupUi(this);
    setTableData();
    connect(ui->tableWidget->horizontalHeader(),SIGNAL(sectionClicked(int)),this,SLOT(allCheck()));
}

examination_login::~examination_login()
{
    delete ui;
}
void examination_login::allCheck(){
    if(ui->tableWidget->horizontalHeader()->currentIndex().column()==0){
        for(int i=0;i<20;i++){
            if(checkboxs.at(i)->checkState()==Qt::Unchecked)
                checkboxs.at(i)->setCheckState(Qt::Checked);
            else
                checkboxs.at(i)->setCheckState(Qt::Unchecked);
        }
    }
}

void examination_login::on_pushButton_lookInfo_clicked()
{
    parse_json *par=new parse_json();
    par->getBackData(ui->lineEdit_no->text());
    text=ui->lineEdit_no->text();
    er=new examination_report();
    er->show();
   // QWidget::close();
}//http://192.168.199.198:8088/api/report?examination_no=0001160001473

QString examination_login::getText(){
    return text;
}

void examination_login::setTableData(){
    ui->tableWidget->setColumnCount(11);
    ui->tableWidget->setRowCount(20);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(216, 236, 224)}");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"全选/取消全选"<<"序号"<<"体检单号"<<"客人姓名"<<"证件号"<<"性别"<<"体检日期"<<"检查状态"<<"体检性质"<<"单位名称"<<"操作");
    checkboxs=QList<QCheckBox *>();
    for(int y=0;y<20;y++){
        checkboxs.append(new QCheckBox());
    }
    for(int i=0;i<20;i++){
       // QCheckBox *com=new QCheckBox();
        ui->tableWidget->setCellWidget(i,0,checkboxs.at(i));
        checkboxs.at(i)->setStyleSheet("margin:0 auto");
        ui->tableWidget->setItem(i,1,new QTableWidgetItem("1"));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem("0001001170000537"));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("伊泽瑞尔"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem("654556"));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem("男"));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem("2017-03-09 10：20：10"));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem("体检完毕"));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem("个人"));
        ui->tableWidget->setItem(i,9,new QTableWidgetItem("召唤师峡谷"));

        button *b=new button();
        ui->tableWidget->setCellWidget(i,10,b);

      //  ui->tableWidget->setCellWidget(i,10,p1);
        ui->tableWidget->setItem(i,10,new QTableWidgetItem(""));
    }


}





