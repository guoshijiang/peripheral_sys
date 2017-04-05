#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<QSqlDatabase>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
   QString getDatabaseName();
   QSqlDatabase getDB();

    explicit login(QWidget *parent = 0);
    ~login();

private slots:

    void on_pushButton_login_clicked();

    void on_lineEdit_ip_textEdited(const QString &arg1);

    void on_lineEdit_databaseName_textEdited(const QString &arg1);

    void on_lineEdit_username_textEdited(const QString &arg1);

    void on_lineEdit_password_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::login *ui;

};

#endif // LOGIN_H
