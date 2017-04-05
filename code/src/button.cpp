#include "button.h"
#include "ui_button.h"
#include <QIcon>
#include <QPixmap>
#include "qdebug.h"

button::button(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::button)
{
    ui->setupUi(this);
    QPixmap pix=QPixmap();
    pix.load(":/new/picture/preview1.jpg");
    pix=pix.scaled(80,80,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    QPixmap pix1=QPixmap();
    pix1.load(":/new/picture/printer1.jpg");
    pix1=pix1.scaled(120,120,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->pushButton_preview->setIcon(pix);
    ui->pushButton_print->setIcon(pix1);
}

button::~button()
{
    delete ui;
}

void button::on_pushButton_preview_clicked()
{
   // qDebug()<<"ss";
}
