#include "userlogin.h"
#include "ui_userlogin.h"
#include<qdebug.h>
#include "dbLogin/login.h"
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QtSql/QSqlDatabase>
#include<QMessageBox>

login *lp;
QSqlDatabase db3;
 QSqlQuery query;
userLogin::userLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userLogin)
{
    ui->setupUi(this);
}

userLogin::~userLogin()
{
    delete ui;
}

void userLogin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
   if(username=="3" && password=="3"){
        QWidget::hide();
        lp=new login();
        lp->show();
   }else{
      QMessageBox::warning(this,QStringLiteral("离开"),QStringLiteral("请输入正确的地址!"),QMessageBox::Yes );
    }
}

void userLogin::on_pushButton_back_clicked()
{
    QWidget::close();
}
