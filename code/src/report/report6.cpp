#include "report/report6.h"
#include "ui_report6.h"
#pragma execution_character_set("utf-8")

report6::report6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report6)
{
    ui->setupUi(this);
    font=QFont();
    font.setPointSize(11);
    font.setFamily("黑体");
    par1=new parse_json();
    setUserInfo();
}

void report6::setUserInfo(){

    person p1=par1->getPersonData();

    ui->lineEdit_name->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name->setStyleSheet("border:none;");
    ui->lineEdit_name->setText(p1.name);

    ui->lineEdit_sex->setAlignment(Qt::AlignCenter);
    ui->lineEdit_sex->setStyleSheet("border:none;");
    if(p1.sex==2){
        ui->lineEdit_sex->setText("女");
    }else{
        ui->lineEdit_sex->setText("男");
    }
    ui->lineEdit_age->setAlignment(Qt::AlignCenter);
    ui->lineEdit_age->setStyleSheet("border:none;");
    ui->lineEdit_age->setText(QString::number(p1.age,10));

    ui->lineEdit_date->setAlignment(Qt::AlignCenter);
    ui->lineEdit_date->setStyleSheet("border:none;");
    ui->lineEdit_date->setText(p1.checkup_date);
}

report6::~report6()
{
    delete ui;
}

void report6::setPictureAndText(int page){
    imagess = par1->getImagesData();
    ui->label_title->setText(imagess.at(page).m_checkup_pic.checkup_pic_name+"报告");
    if(imagess.at(page).m_checkup_pic.checkup_pic_img.size()==1){
        QByteArray arr = par1->getIcon(imagess.at(page).m_checkup_pic.checkup_pic_img.at(0));
        QPixmap pix;
        pix.loadFromData(arr);
        pix=pix.scaled(ui->label_picture->width(),ui->label_picture->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        ui->label_picture->setPixmap(pix);
        ui->textBrowser->setStyleSheet("border:none");
        ui->textBrowser->setFont(font);
        ui->textBrowser->setText("超声所见:    ");
        for(int j=0;j<imagess.at(page).m_items_pic.size();j++){
            ui->textBrowser->append("    "+imagess.at(page).m_items_pic.at(j).items_pic_name+":"+"    "+imagess.at(page).m_items_pic.at(j).items_pic_value);
        }
        ui->textBrowser->append("超声提示：\n        "+imagess.at(page).m_checkup_pic.checkup_pic_result);
        ui->label_title->setAlignment(Qt::AlignCenter);
    }else if(imagess.at(page).m_checkup_pic.checkup_pic_img.size()==4){
        ui->label_picture->hide();
        QList<QPixmap> pixmaps;
        for(int i=0;i<4;i++){
            QByteArray arr = par1->getIcon(imagess.at(page).m_checkup_pic.checkup_pic_img.at(i));
            QPixmap pix;
            pix.loadFromData(arr);
            pixmaps.append(pix);
        }
          QLabel *lab=new QLabel();
          lab->setPixmap(pixmaps.at(0));
          lab->setParent(this);
          lab->setGeometry(ui->label_picture->rect().x()+60,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab1=new QLabel();
          lab1->setPixmap(pixmaps.at(1));
          lab1->setParent(this);
          lab1->setGeometry(ui->label_picture->rect().x()+ui->label_picture->width()+60+10,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab2=new QLabel();
          lab2->setPixmap(pixmaps.at(2));
          lab2->setParent(this);
          lab2->setGeometry(ui->label_picture->rect().x()+ui->label_picture->width()+60+10,ui->label_picture->rect().y()+100+ui->label_picture->height()+10,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab3=new QLabel();
          lab3->setPixmap(pixmaps.at(3));
          lab3->setParent(this);
          lab3->setGeometry(ui->label_picture->rect().x()+60,ui->label_picture->rect().y()+100+ui->label_picture->height()+10,ui->label_picture->width(),ui->label_picture->height());
        ui->textBrowser->setStyleSheet("border:none");
        ui->textBrowser->setFont(font);
        ui->textBrowser->setText("超声所见:    ");
        for(int y=0;y<imagess.at(page).m_items_pic.size();y++){
            ui->textBrowser->append("    "+imagess.at(page).m_items_pic.at(y).items_pic_name+":"+"    "+imagess.at(page).m_items_pic.at(y).items_pic_value);
        }
        ui->textBrowser->append("超声提示：\n        "+imagess.at(page).m_checkup_pic.checkup_pic_result);
        ui->label_title->setAlignment(Qt::AlignCenter);
        ui->textBrowser->setGeometry(ui->textBrowser->rect().x(),ui->textBrowser->rect().y()+520,ui->textBrowser->width(),ui->textBrowser->height());
    }else if(imagess.at(page).m_checkup_pic.checkup_pic_img.size()==3){
        ui->label_picture->hide();
        QList<QPixmap> pixmaps;
        for(int i=0;i<4;i++){
            QByteArray arr = par1->getIcon(imagess.at(page).m_checkup_pic.checkup_pic_img.at(i));
            QPixmap pix;
            pix.loadFromData(arr);
            pixmaps.append(pix);
        }
          QLabel *lab=new QLabel();
          lab->setPixmap(pixmaps.at(0));
          lab->setParent(this);
          lab->setGeometry(ui->label_picture->rect().x()+60,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab1=new QLabel();
          lab1->setPixmap(pixmaps.at(1));
          lab1->setParent(this);
          lab1->setGeometry(ui->label_picture->rect().x()+ui->label_picture->width()+60+10,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab2=new QLabel();
          lab2->setPixmap(pixmaps.at(2));
          lab2->setParent(this);
          lab2->setGeometry(ui->label_picture->rect().x()+ui->label_picture->width()/2+60+10,ui->label_picture->rect().y()+100+ui->label_picture->height()+10,ui->label_picture->width(),ui->label_picture->height());

          ui->textBrowser->setStyleSheet("border:none");
          ui->textBrowser->setFont(font);
          ui->textBrowser->setText("超声所见:    ");
          for(int y=0;y<imagess.at(page).m_items_pic.size();y++){
              ui->textBrowser->append("    "+imagess.at(page).m_items_pic.at(y).items_pic_name+":"+"    "+imagess.at(page).m_items_pic.at(y).items_pic_value);
          }
          ui->textBrowser->append("超声提示：\n        "+imagess.at(page).m_checkup_pic.checkup_pic_result);
          ui->label_title->setAlignment(Qt::AlignCenter);
          ui->textBrowser->setGeometry(ui->textBrowser->rect().x(),ui->textBrowser->rect().y()+520,ui->textBrowser->width(),ui->textBrowser->height());
    }else if(imagess.at(page).m_checkup_pic.checkup_pic_img.size()==2){
        ui->label_picture->hide();
        QList<QPixmap> pixmaps;
        for(int i=0;i<4;i++){
            QByteArray arr = par1->getIcon(imagess.at(page).m_checkup_pic.checkup_pic_img.at(i));
            QPixmap pix;
            pix.loadFromData(arr);
            pixmaps.append(pix);
        }
          QLabel *lab=new QLabel();
          lab->setPixmap(pixmaps.at(0));
          lab->setParent(this);
          lab->setGeometry(ui->label_picture->rect().x()+60,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          QLabel *lab1=new QLabel();
          lab1->setPixmap(pixmaps.at(1));
          lab1->setParent(this);
          lab1->setGeometry(ui->label_picture->rect().x()+ui->label_picture->width()+60+10,ui->label_picture->rect().y()+100,ui->label_picture->width(),ui->label_picture->height());
          ui->textBrowser->setStyleSheet("border:none");
          ui->textBrowser->setFont(font);
          ui->textBrowser->setText("超声所见:    ");
          for(int y=0;y<imagess.at(page).m_items_pic.size();y++){
              ui->textBrowser->append("    "+imagess.at(page).m_items_pic.at(y).items_pic_name+":"+"    "+imagess.at(page).m_items_pic.at(y).items_pic_value);
          }
          ui->textBrowser->append("超声提示：\n        "+imagess.at(page).m_checkup_pic.checkup_pic_result);
          ui->label_title->setAlignment(Qt::AlignCenter);
          ui->textBrowser->setGeometry(ui->textBrowser->rect().x(),ui->textBrowser->rect().y()+320,ui->textBrowser->width(),ui->textBrowser->height());
    }
}


