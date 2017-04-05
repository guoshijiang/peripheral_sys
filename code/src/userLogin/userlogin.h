#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QWidget>

namespace Ui {
class userLogin;
}

class userLogin : public QWidget
{
    Q_OBJECT

public:
    explicit userLogin(QWidget *parent = 0);
    ~userLogin();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::userLogin *ui;
};

#endif // USERLOGIN_H
