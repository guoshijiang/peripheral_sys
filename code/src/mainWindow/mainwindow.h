#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include<QSqlRelationalTableModel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg);
    void setComboBoxValue();

private slots:

    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_comfirm_clicked();

    void on_pushButton_back_clicked();

    void on_treeView_clicked(const QModelIndex &index);

    void on_pushButton_find_clicked();

    void on_pushButton_business_clicked();

    void on_pushButton_xiaohao_clicked();

    void on_pushButton_remove_clicked();

    void on_pushButton_business_xiaohao_clicked();

    void on_pushButton_database_clicked();

    void on_checkBox_clicked();

    void on_radioButton_clicked();

    void on_pushButton_des_clicked();

    void on_pushButton_asc_clicked();

 //   void on_comboBox_status_currentIndexChanged(const QString &arg1);


     void on_comboBox_status_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *mm;
   // QSqlTableModel *model3;
    QSqlQueryModel *query_model;
    QSqlRelationalTableModel *model1;
   // QSqlQueryModel query_model1;
    QModelIndex indexs[100];
};

#endif // MAINWINDOW_H
