#include "login.h"
#include "ui_login.h"
#include<QSqlDatabase>
#include<qdebug.h>
#include"mainWindow/mainwindow.h"
#include <QFile>
#include<QTextStream>
#include<QString>
#include<QMessageBox>
#include<QByteArray>
#include"browser/browser.h"
#include"browser/browserwindow.h"
#include<QDir>
#include "userLogin/userlogin.h"

QString ip;
QString databaseName;
QString username;
QString password;
QString s1="";
QString s2="";
QString s3="";
QString s4="";
QString path=QDir::currentPath();
QFile file(path+"/database1.txt");
QTextStream in(&file);
QTextStream out(&file);
QSqlDatabase db=QSqlDatabase::addDatabase("QPSQL");

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);
    on_pushButton_clicked();

}
login::~login()
{
    delete ui;
}

//login
void login::on_pushButton_login_clicked()
{

if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
    //no data
    if(in.atEnd()){
         s1=ui->lineEdit_ip->text();
         s2=ui->lineEdit_databaseName->text();
         s3=ui->lineEdit_username->text();
         s4=ui->lineEdit_password->text();
        if(s1=="" || s2=="" || s3=="" || s4==""){
             QMessageBox::warning(this,QStringLiteral("错误"),QStringLiteral("请输入!"),QMessageBox::Yes);
             QString str;
             str = QString(QStringLiteral("登陆数据库错误:用户名，密码，IP地址，数据库名没有输入"));
             qCritical() << str;
        }else{
             db=getDB();
             db.open();
             if(db.isOpenError()){
                QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("连接失败!"),QMessageBox::Yes);
                QString str;
                                str = QString(QStringLiteral("登陆数据库错误:用户名，密码，IP地址，数据库名输错了"));
                                qCritical() << str;
             }else{
                 if(file.isOpen()){
                     file.close();
                     file.open(QIODevice::WriteOnly | QIODevice::Text);
                     s1=ui->lineEdit_ip->text();
                     s2=ui->lineEdit_databaseName->text();
                     s3=ui->lineEdit_username->text();
                     s4=ui->lineEdit_password->text();
                     out<<s1<<endl;
                     out<<s2<<endl;
                     out<<s3<<endl;
                     out<<s4<<endl;
                     MainWindow* mm=new MainWindow();
                     mm->show();
                     file.close();
                     db.close();
                     QWidget::hide();
                 }
             }
        }
    }else{
        s1=ui->lineEdit_ip->text();
        s2=ui->lineEdit_databaseName->text();
        s3=ui->lineEdit_username->text();
        s4=ui->lineEdit_password->text();
        if(s1=="" || s2=="" || s3=="" || s4==""){
             QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("请输入!"),QMessageBox::Yes);
             QString str;
                          str = QString(QStringLiteral("登陆数据库错误:用户名，密码，IP地址，数据库名没有输入"));
                          qCritical() << str;
        }else{
            db=getDB();
            db.open();
            if(db.isOpenError()){
               QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("连接错误!"),QMessageBox::Yes);
               QString str;
                              str = QString(QStringLiteral("登陆数据库错误:用户名，密码，IP地址，数据库名输错了"));
                              qCritical() << str;
            }else{
                 QWidget::hide();
            MainWindow* mm=new MainWindow();
            mm->show();
            }
        }
    }
}
    file.close();
}

//得到数据库信息
QSqlDatabase login::getDB(){
    db.setHostName(ip);
    db.setDatabaseName(databaseName);
    db.setUserName(username);
    db.setPassword(password);
    return db;
}

//ip
void login::on_lineEdit_ip_textEdited(const QString &arg1)
{
    ip=arg1;
    QByteArray ba=ip.toLatin1();
    const char *s=ba.data();
    while((*s && *s>='0' && *s<='9') || *s=='.')s++;
    if(*s){
        QMessageBox::warning(this,QStringLiteral("离开"),"请输入正确的地址!",QMessageBox::Yes );
        QString str;
                str = QString(QStringLiteral("登陆数据库错误:输入的ip地址有误"));
                qCritical() << str;
    }
}

//databaseName
void login::on_lineEdit_databaseName_textEdited(const QString &arg1)
{
    databaseName=arg1;
}

//username
void login::on_lineEdit_username_textEdited(const QString &arg1)
{
    username=arg1;
}

//password
void login::on_lineEdit_password_textEdited(const QString &arg1)
{
    password=arg1;
}

//检查文件 方便登陆
void login::on_pushButton_clicked()
{
    if(file.exists()){
    }else{
        file.open( QIODevice::WriteOnly );
        file.close();
    }
     file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!in.atEnd()){
        QStringList s;
    while(!in.atEnd()){
        QString line =in.readLine();
        if(line!=""){
            s.append(line);
        }
    }
    ip=s[0];
    databaseName=s[1];
    username=s[2];
    password=s[3];
    ui->lineEdit_ip->setText(ip);
    ui->lineEdit_databaseName->setText(databaseName);
    ui->lineEdit_username->setText(username);
    ui->lineEdit_password->setText(password);
          file.close();
    }else{
        file.close();
    }
}

//得到数据库名称
QString login::getDatabaseName(){
    return databaseName;
}

void login::on_pushButton_back_clicked()
{
    QWidget::close();
    userLogin *ul=new userLogin();
    ul->show();
}
