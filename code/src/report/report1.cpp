#include "report/report1.h"
#include "ui_report1.h"
#include <report/examination_login.h>
#include <pojo/person.h>
#pragma execution_character_set("UTF-8")

examination_login *el1;
QString sex;
report1::report1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report1)
{
    ui->setupUi(this);
    setPersonInfo();
}

report1::~report1()
{
    delete ui;
}

void report1::setPersonInfo(){
    p_json=new parse_json();
    p = p_json->getPersonData();
    ui->textEdit->setStyleSheet("border:0px");
    ui->lineEdit_name->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_name->setText(p.name);
    ui->lineEdit_company->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_company->setAlignment(Qt::AlignCenter);
    ui->lineEdit_company->setText(p.enterprise);
    ui->lineEdit_date->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_date->setAlignment(Qt::AlignCenter);
    ui->lineEdit_date->setText(p.checkup_date);
    ui->lineEdit_id->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_id->setAlignment(Qt::AlignCenter);
    ui->lineEdit_id->setText(p.card_no);
    ui->lineEdit_sex->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_sex->setAlignment(Qt::AlignCenter);
    if(p.sex==1){
        sex="男";
    }else{
        sex="女";
    }
    ui->lineEdit_sex->setText(sex);
    ui->lineEdit_style->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_style->setAlignment(Qt::AlignCenter);
    ui->lineEdit_style->setText("");
    ui->lineEdit_name_2->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name_2->setStyleSheet("border:0px;font:17px");
    ui->lineEdit_name_2->setText(p.name);
    QByteArray arr = p_json->getIcon(p.image_url);
   // qDebug()<<p.image_url;
    QPixmap pix;
    pix.loadFromData(arr);
    pix=pix.scaled(ui->label_picture->width(),ui->label_picture->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_picture->setPixmap(pix);
}
