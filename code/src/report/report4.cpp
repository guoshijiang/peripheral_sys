#include "report/report4.h"
#include "ui_report4.h"
#pragma execution_character_set("utf-8")


report4::report4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report4)
{
    ui->setupUi(this);
    par=new parse_json();
    p=par->getPersonData();
    setSignIcon();
    setPersonInfo();
    ui->label_doctor->hide();
    ui->label_sign->hide();
    ui->label_advice->hide();
}

report4::~report4()
{
    delete ui;
}

void report4::setPersonInfo(){
    ui->lineEdit_name->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name->setStyleSheet("border:none;");
    ui->lineEdit_name->setText(p.name);
    ui->label_name->setText(p.name);
    ui->lineEdit_sex->setAlignment(Qt::AlignCenter);
    ui->lineEdit_sex->setStyleSheet("border:none;");
    if(p.sex==2){
        ui->lineEdit_sex->setText("女");
    }else{
        ui->lineEdit_sex->setText("男");
    }
    ui->lineEdit_age->setAlignment(Qt::AlignCenter);
    ui->lineEdit_age->setStyleSheet("border:none;");
    ui->lineEdit_age->setText(QString::number(p.age, 10));

    ui->lineEdit_date->setAlignment(Qt::AlignCenter);
    ui->lineEdit_date->setStyleSheet("border:none;");
    ui->lineEdit_date->setText(p.checkup_date);
    ui->label_date->setText(p.checkup_date);
}

void report4::setCheckInfo(int page){

    QList<int> ints;
    QList<QString> strs;
    QList<specs> specss=par->getSpecsData();
    for(int i=0;i<specss.size();i++){
        int advice=calculateCount(specss.at(i).advice);
        int result=calculateCount(specss.at(i).result);
        int sum=advice+result+1;
        ints.append(sum);
    }
    int ss=0;
    QString str;
    for(int i=0;i<ints.size();i++){
        if(ss+ints.at(i)<30){
            ss+=ints.at(i);
            str+=specss.at(i).checkup+"\n";
            str+="    "+specss.at(i).advice+"\n";
            str+="    "+specss.at(i).result+"\n";
            if(i+1==specss.size()){
                strs.append(str);
            }
        }else{
            strs.append(str);
            ss=0;
            str="";
            str+=specss.at(i).checkup+"\n";
            str+="    "+specss.at(i).advice+"\n";
            str+="    "+specss.at(i).result+"\n";
        }
    }
    if(page==strs.size()-1){
        ui->label_doctor->show();
        ui->label_sign->show();
        ui->label_advice->show();
        ui->label_context_3->setText("汇总医生："+specss.at(0).doctor);
        ui->label_context_3->setAlignment(Qt::AlignRight);
        ui->label_context_2->setText(fina.m_final);
    }
    ui->label_context->setWordWrap(true);
    ui->label_context->setAlignment(Qt::AlignTop);
    ui->label_context->setText(strs.at(page));
    ui->label_context->adjustSize();
    ui->label_advice->setAlignment(Qt::AlignTop);
}

int report4::calculateCount(QString str){
    if(str.contains("\n")){
        QStringList s=str.split("\n");
        return s.size();
    }
    return 1;
}

int report4::returnPageCount(){
    QList<int> ints;
    QList<QString> strs;
    parse_json *pj=new parse_json();
    QList<specs> specss=pj->getSpecsData();
    for(int i=0;i<specss.size();i++){
        int advice=calculateCount(specss.at(i).advice);
        int result=calculateCount(specss.at(i).result);
        int sum=advice+result+1;
        ints.append(sum);
        int ss=0;
        QString str;
        for(int i=0;i<ints.size();i++){
            if(ss+ints.at(i)<32){
                ss+=ints.at(i);
                str+=specss.at(i).checkup+"\n";
                str+=specss.at(i).advice;
                str+=specss.at(i).result;
            }else{
                strs.append(str);
                ss=0;
                str="";
            }
        }
    }
    return strs.size();
}

void report4::setSignIcon(){
    fina=par->getFinalData();
    QByteArray arr = par->getIcon(fina.m_doctor);
    QPixmap pix;
    pix.loadFromData(arr);
    pix=pix.scaled(ui->label_sign->width(),ui->label_sign->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_sign->setPixmap(pix);
}



