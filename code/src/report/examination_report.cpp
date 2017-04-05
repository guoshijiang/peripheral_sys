﻿#include "report/examination_report.h"
#include "ui_examination_report.h"
#include <QSqlQueryModel>
#include "qdebug.h"
#include "report/examination_login.h"
#include <QSqlRecord>
#include "printer/d_printer.h"
#include <QToolBar>
#include <QPushButton>
#include "pojo/sales.h"
#include<QDir>
#include <QFile>
#pragma execution_character_set("utf-8")

examination_login *el;
int currentPage;
examination_report::examination_report(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::examination_report)
{
    ui->setupUi(this);
    QIcon ico_first(":/new/picture/first.jpg");
    QIcon ico_left(":/new/picture/left.jpg");
    QIcon ico_right(":/new/picture/right.jpg");
    QIcon ico_end(":/new/picture/end.jpg");
    ui->pushButton_first->setIcon(ico_first);
    ui->pushButton_first->setFlat(true);
    ui->pushButton_end->setFlat(true);
    ui->pushButton_end->setIcon(ico_end);
    ui->pushButton_last->setFlat(true);
    ui->pushButton_last->setIcon(ico_left);
    ui->pushButton_next->setFlat(true);
    ui->pushButton_next->setIcon(ico_right);
    ui->pushButton_print->setFlat(true);
    ui->lineEdit->setText("1");
}

examination_report::~examination_report()
{
    delete ui;
}

void examination_report::createToolbar(){
    QToolBar *toolbar=new QToolBar(this);
    selectbutton=new QPushButton();
    selectbutton->setText(QStringLiteral("查看体检报告"));
    printbutton=new QPushButton();
    printbutton->setText(QStringLiteral("打印体检报告"));
    backbutton=new QPushButton();
    backbutton->setText(QStringLiteral("返回"));
    toolbar->addWidget(selectbutton);
    toolbar->addWidget(printbutton);
    toolbar->addWidget(backbutton);
}

void examination_report::on_pushButton_next_clicked()
{
    currentPage=ui->lineEdit->text().toInt()+1;
    if(currentPage<=saless.size()/20+5+depts.size()+r4->returnPageCount()-1+imagess.size()-1){
        ui->lineEdit->setText(QString::number(currentPage,10));
    }
}

void examination_report::on_pushButton_last_clicked()
{
    if(ui->lineEdit->text()!="1"){
        currentPage=ui->lineEdit->text().toInt()-1;
        ui->lineEdit->setText(QString::number(currentPage,10));
    }
}

void examination_report::on_lineEdit_textChanged(const QString &arg1)
{
    if(arg1=="1"){
        r1=new report1();
        ui->scrollArea->setWidget(r1);
    }
    p_json=new parse_json();
    saless=p_json->getSaleData();
    depts=p_json->getDeptData();
        if(arg1.toInt()>=2 && arg1.toInt()<=saless.size()/20+2){
            r2=new report2();
            r2->getData(arg1.toInt());
            ui->scrollArea->setWidget(r2);

    }
    if(arg1.toInt()==saless.size()/20+3){
        r3=new report3();
        ui->scrollArea->setWidget(r3);
    }
    if(arg1.toInt()>=saless.size()/20+4 && arg1.toInt()<=saless.size()/20+4+r4->returnPageCount()-1){
        r4=new report4();
        r4->setCheckInfo(arg1.toInt()-(saless.size()/20+4));
        ui->scrollArea->setWidget(r4);
    }
    if(arg1.toInt()>=saless.size()/20+5+r4->returnPageCount()-1 && arg1.toInt()<=saless.size()/20+5+depts.size()-1+r4->returnPageCount()-1){
        r5=new report5();
        r5->setTableData(arg1.toInt()-(saless.size()/20+5+r4->returnPageCount()-1));
        ui->scrollArea->setWidget(r5);
    }
    imagess = p_json->getImagesData();
    if(arg1.toInt()>=saless.size()/20+5+depts.size()+r4->returnPageCount()-1 &&arg1.toInt()<=saless.size()/20+5+depts.size()+r4->returnPageCount()-1+imagess.size()-1){

         //  qDebug()<<arg1.toInt()-(saless.size()/20+5+depts.size()+r4->returnPageCount()-1);
        r6=new report6();
        r6->setPictureAndText(arg1.toInt()-(saless.size()/20+5+depts.size()+r4->returnPageCount()-1));
        ui->scrollArea->setWidget(r6);
    }
    ui->label_pageNum->setText(QString::number(saless.size()/20+5+depts.size()+r4->returnPageCount()-1+imagess.size()-1));
}

void examination_report::on_pushButton_first_clicked()
{
    ui->lineEdit->setText("1");
}

void examination_report::on_pushButton_print_clicked()
{
    d_printer *dp=new d_printer();
    QList<QPixmap> pixs;
    QPixmap image1;
    QPixmap image2;
    QPixmap image;
    QPixmap image4;
    QString path1=QDir::currentPath();
   // qDebug()<<path1;
   // image3.load(path1+"\001.jpg");
   // image4.load(path1+"\002.jpg");
    for(int i=1;i<=24;i++){
        if(i!=1){
            on_lineEdit_textChanged(QString::number(i));
        }
       // if(i==1){
            image = ui->scrollArea->grab(QRect(QPoint(0,0),QSize(681,821)));
        //    pixs.append(image);
            image.save(path1+"/picture"+"/"+QString::number(i,10)+".jpg");
        //   qDebug()<<image3.save(path3+"/001.jpg");
      //     qDebug()<<image3.toImage().byteCount();
  //      }
    //    QFile::remove("E:/git_rep/git_reppictureqq.jpg");
   //     if(i==2){
    //       image4 = ui->scrollArea->grab(QRect(QPoint(0,0),QSize(681,821)));
          //  pixs.append(image);
     //      image4.save("E:\\git_rep\\picture\\008.jpg");
      //     qDebug()<<image4.save("://new//picture//dd.jpg");
      //     qDebug()<<image4.toImage().byteCount();
 //       }
    }
    for(int i=1;i<=2;i++){
        image.load(path1+"/picture"+"/"+QString::number(i,10)+".jpg");
        pixs.append(image);
    }
    qDebug()<<pixs.size();
  //  image1.load(":/new/picture/1.png");

  //  qDebug()<<image3.toImage().byteCount()<<"----------";

  //  image2.load(":/new/picture/2.jpg");
 //   qDebug()<<image4.toImage().byteCount()<<"----------";
    dp->doPrint(pixs);
}

void examination_report::on_pushButton_end_clicked()
{
    ui->lineEdit->setText(QString::number(saless.size()/20+5+depts.size()+r4->returnPageCount()-1+imagess.size()-1));
}