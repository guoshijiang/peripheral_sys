#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dbLogin/login.h"
#include<qdebug.h>
#include<QSqlTableModel>
#include<QWidget>
#include<QStandardItemModel>
#include<QStandardItem>
#include<QString>
#include<QMap>
#include<QModelIndex>
#include<QDir>
#include<QModelIndexList>
#include<QItemSelectionModel>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QSqlRelationalTableModel>
#include<QSqlError>
#include<QMessageBox>
#include<QTime>

login *s;
QSqlRecord record;
QString path1=QDir::currentPath();
QSqlDatabase db1;
QMap<QString,QString> map;
QMap<QString,QIcon> m_publicIconMap;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_business_xiaohao->hide();
    ui->label_xiaohao->hide();
    ui->lineEdit_xiaohao->hide();
    ui->pushButton_xiaohao->hide();
    ui->pushButton_remove->hide();
    ui->tableView_xiaohao->hide();
    ui->pushButton_add->hide();
    ui->pushButton_delete->hide();
    ui->pushButton_update->hide();
    ui->pushButton_asc->hide();
    ui->pushButton_des->hide();
    ui->pushButton_comfirm->hide();
    ui->checkBox->hide();
    ui->radioButton->hide();
    ui->comboBox_status->hide();

    //小手
    ui->pushButton_business_xiaohao->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_business->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_add->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_back->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_comfirm->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_find->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_remove->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_update->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_xiaohao->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_database->setCursor(QCursor(Qt::PointingHandCursor));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//add
void MainWindow::on_pushButton_add_clicked()
{
    int rowNum=model->rowCount();
       model->insertRow(rowNum);
       model->setData(model->index(rowNum,0),"");
}

//delete
void MainWindow::on_pushButton_delete_clicked()
{
    if(ui->checkBox->isChecked()){
        QItemSelectionModel *selections = ui->tableView_xiaohao->selectionModel();
        QModelIndexList list = selections->selectedRows();
        for(int i=0;i<list.size();i++){
            model->removeRow(list[i].row());
        }
        model->submitAll();
    }else{
        model->removeRow(ui->tableView_xiaohao->currentIndex().row());
        model->removeRow(ui->tableView->currentIndex().row());
        model->submitAll();
    }

}

//update
void MainWindow::on_pushButton_update_clicked()
{
    on_pushButton_comfirm_clicked();
}

//confirm
void MainWindow::on_pushButton_comfirm_clicked()
{
    model->database().transaction();
        if(model->submitAll()){
              model->database().commit();
        }else{
            model->database().rollback();
            QMessageBox::warning(this,QStringLiteral("错误"),tr("连接数据库错误: %1").arg(model->lastError().text()));
            QString str;
                        str = QString(QStringLiteral("数据库错误: %1")).arg(model->lastError().text());
                        qWarning() << str;
        }
}

//back
void MainWindow::on_pushButton_back_clicked()
{
    ui->checkBox->hide();
    ui->radioButton->hide();
    ui->pushButton_add->hide();
    ui->pushButton_delete->hide();
    ui->pushButton_update->hide();
    ui->pushButton_asc->hide();
    ui->pushButton_des->hide();
    ui->pushButton_comfirm->hide();
    s=new login();
    QWidget::hide();
    s->show();
}

//单击显示表
void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QStandardItemModel* model2 = static_cast<QStandardItemModel*>(ui->treeView->model());
    QStandardItem* currentItem=model2->itemFromIndex(index);
    QString arg1=currentItem->text();
    model=new QSqlTableModel(this);
              model->setTable(arg1);
              model->setEditStrategy(QSqlTableModel::OnManualSubmit);
              model->select();
      ui->tableView->setModel(model);
      ui->tableView->show();
}

//find button
void MainWindow::on_pushButton_find_clicked()
{
    bool t1 = ui->treeView->isHidden();
    if(!t1){
        ui->tableView->show();
    }
    QString find=ui->lineEdit_find->text();
    model=new QSqlTableModel(this);
              model->setTable(find);
              model->setEditStrategy(QSqlTableModel::OnManualSubmit);
              model->select();
      ui->tableView->setModel(model);
}

//business
void MainWindow::on_pushButton_business_clicked()
{

    bool q2=ui->pushButton_add->isHidden();
    if(q2){
        ui->pushButton_add->show();
        ui->pushButton_comfirm->show();
        ui->pushButton_delete->show();

        ui->pushButton_update->show();
    }
    ui->pushButton_add->hide();
    ui->pushButton_comfirm->hide();
    ui->pushButton_delete->hide();
    ui->pushButton_update->hide();
    ui->treeView->hide();
    ui->tableView->hide();
    ui->pushButton_business_xiaohao->show();
}

//select button
void MainWindow::on_pushButton_xiaohao_clicked()
{
    if(ui->checkBox->isHidden()){
        ui->checkBox->show();
        ui->pushButton_remove->show();
        ui->comboBox_status->show();
        ui->pushButton_asc->show();
        ui->pushButton_des->show();
        ui->radioButton->show();
    }
    QString xh=ui->lineEdit_xiaohao->text();
    db1=s->getDB();
    if(!db1.isOpen()){
         db1.open();
    }else{
    }
    if(xh==""){
        query_model=new QSqlQueryModel();
        query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code");
        if(query_model->lastError().isValid()){
             QMessageBox::warning(this, QString::fromLocal8Bit("错误"), QStringLiteral("连接数据库出错"));
             QString str;
                          str = QString(QStringLiteral("点击查询时发生sql错误: %1")).arg(query_model->lastError().text());
                          qCritical() << str;
        }
        ui->tableView_xiaohao->setModel(query_model);
         setComboBoxValue();
    }else{
        QString dd=ui->lineEdit_xiaohao->text();
        query_model=new QSqlQueryModel();
        query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code and e.examination_no='"+dd+"'");
        if(query_model->lastError().isValid()){
             QMessageBox::warning(this, QString::fromLocal8Bit("错误"), QStringLiteral("连接数据库出错"));
             QString str;
                          str = QString(QStringLiteral("点击查询时发生sql错误sql: %1")).arg(query_model->lastError().text());
                          qCritical() << str;
        }
        ui->tableView_xiaohao->setModel(query_model);
    }
}

//left xiaohao button
void MainWindow::on_pushButton_business_xiaohao_clicked()
{

    bool s1=ui->lineEdit_xiaohao->isHidden();
 if(s1){
     ui->label_xiaohao->show();
     ui->lineEdit_xiaohao->show();
     ui->pushButton_xiaohao->show();
     ui->tableView_xiaohao->show();
 }
}

//database
void MainWindow::on_pushButton_database_clicked()
{
    bool u1=ui->pushButton_add->isHidden();
    if(u1){
        ui->pushButton_add->show();
        ui->pushButton_delete->show();
        ui->pushButton_update->show();
        ui->pushButton_comfirm->show();
    }
    bool s2=ui->pushButton_business_xiaohao->isHidden();
    if(!s2){
        ui->checkBox->hide();
        ui->comboBox_status->hide();
        ui->radioButton->hide();
        ui->pushButton_business_xiaohao->hide();
        ui->label_xiaohao->hide();
        ui->lineEdit_xiaohao->hide();
        ui->pushButton_xiaohao->hide();
        ui->pushButton_remove->hide();
        ui->tableView_xiaohao->hide();
        ui->pushButton_asc->hide();
        ui->pushButton_des->hide();
    }
    //treeView小图标
        QString picture1=":/new/picture/1.png";
        QString picture2=":/new/picture/3.jpg";
        QString picture3=":/new/picture/5.jpg";
        m_publicIconMap[QString("treeItem_database")] =QIcon(QString(picture1));
        m_publicIconMap[QString("treeItem_tables")] =QIcon(QString(picture2));
        m_publicIconMap[QString("treeItem_table")] =QIcon(QString(picture3));
       //treeview的树形设计
        QStandardItemModel* model1=new QStandardItemModel(ui->treeView);
        QString ss=s->getDatabaseName();
        model1->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("数据库名"));
        QStandardItem* itemProject=new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_database")],QString(ss));
        QStandardItem* itemChild = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_tables")],QString("blood"));
        QStandardItem* itemChild1 = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_tables")],QString("bone"));
        QStandardItem* itemChild2 = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_tables")],QString("others"));
             db1=s->getDB();
             db1.open();
             QStringList dbList= db1.tables();
             for(int i=0;i<dbList.length();i++){
                 if(i<30){
                     QStandardItem* Child1 = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_table")],QString(dbList[i]));
                        itemChild1->appendRow(Child1);
                 }else if(i<90){
                     QStandardItem* Child2 = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_table")],QString(dbList[i]));
                        itemChild2->appendRow(Child2);
                 }
                  QStandardItem* Child = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_table")],QString(dbList[i]));
                  itemChild->appendRow(Child);
         }
                itemProject->appendRow(itemChild);
                itemProject->appendRow(itemChild1);
                itemProject->appendRow(itemChild2);
                model1->appendRow(itemProject);
                ui->treeView->setModel(model1);
                db1.close();
                ui->treeView->show();
}

//checkBox
void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked()){
        ui->tableView_xiaohao->setSelectionMode(QAbstractItemView::MultiSelection);//多选
        ui->tableView_xiaohao->setSelectionBehavior(QAbstractItemView::SelectRows);
    }else{
        ui->tableView_xiaohao->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableView_xiaohao->setSelectionBehavior(QAbstractItemView::SelectRows);
    }
}


//xiaohao button
void MainWindow::on_pushButton_remove_clicked()
{
    bool r=ui->checkBox->isChecked();
    bool r1=ui->radioButton->isChecked();
    if(!r && !r1){
        record=query_model->record(ui->tableView_xiaohao->currentIndex().row());
        QString s = record.value("id").toString();
        query_model=new QSqlQueryModel;
        query_model->setQuery("update examination set status=1050 where id="+s);
        if(ui->comboBox_status->currentText()!=""){
            on_comboBox_status_activated(ui->comboBox_status->currentText());
        }
        if(query_model->lastError().isValid()){
             QMessageBox::warning(this, QString::fromLocal8Bit("错误"), QStringLiteral("请选择体检单号进行销号"));
             QString str;
                          str =QString(QStringLiteral("点击销号时没有选择体检单号: %1")).arg(query_model->lastError().text());
                          qCritical() << str;
        }
        if(ui->comboBox_status->currentText()!=""){
            on_comboBox_status_activated(ui->comboBox_status->currentText());
        }else{
            on_pushButton_xiaohao_clicked();
        }
    }else{
          QItemSelectionModel *selections = ui->tableView_xiaohao->selectionModel();
          QModelIndexList list = selections->selectedRows();
        QList<QString> w ;
          for(int i=0;i<list.size();i++){
              record=query_model->record(list[i].row());
                w.append(record.value("id").toString());
              }
          for(int j=0;j<list.size();j++){
                        query_model->setQuery("update examination set status=1050 where id="+w[j]);
                        if(query_model->lastError().isValid()){
                             QMessageBox::warning(this,tr("query_model"),tr("sql: %1").arg(query_model->lastError().text()));
                             QString str;
                                          str = QString("sql: %1").arg(query_model->lastError().text());
                                          qCritical() << str;
                        }
          }
          if(ui->comboBox_status->currentText()!=""){
              on_comboBox_status_activated(ui->comboBox_status->currentText());
          }else{
              on_pushButton_xiaohao_clicked();
          }
    }
}

//全选
void MainWindow::on_radioButton_clicked()
{
    if(ui->radioButton->isChecked()){
       ui->tableView_xiaohao->setSelectionMode(QAbstractItemView::MultiSelection);
       ui->tableView_xiaohao->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView_xiaohao->selectAll();
    }else{
        if(!ui->checkBox->isChecked()){
            ui->tableView_xiaohao->setSelectionMode(QAbstractItemView::SingleSelection);
            ui->tableView_xiaohao->setSelectionBehavior(QAbstractItemView::SelectRows);
        }
        if(ui->comboBox_status->currentText()==""){
            on_pushButton_xiaohao_clicked();
        }else{
            on_pushButton_xiaohao_clicked();
            on_comboBox_status_activated(ui->comboBox_status->currentText());
        }
    }
}

//降序
void MainWindow::on_pushButton_des_clicked()
{
   if(ui->comboBox_status->currentText()!=""){
       QString arg1=ui->comboBox_status->currentText();
       query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code and e_s.examination_status_value='"+arg1+"' order by id desc");
   }else{
        query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code order by id desc");
   }
   ui->tableView_xiaohao->setModel(query_model);
}

//升序
void MainWindow::on_pushButton_asc_clicked()
{
    if(ui->comboBox_status->currentText()!=""){
        QString arg1=ui->comboBox_status->currentText();
        query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code and e_s.examination_status_value='"+arg1+"' order by id asc");
    }else{
        query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code order by id asc");
    }
    ui->tableView_xiaohao->setModel(query_model);
}

//下拉列表
void MainWindow::setComboBoxValue(){
    QSqlTableModel model1;
              model1.setTable("examination_status");
              model1.setEditStrategy(QSqlTableModel::OnManualSubmit);
              model1.select();
    for(int i=0;i<model1.rowCount();i++){
        QSqlRecord record=model1.record(i);
        QString s=record.value("examination_status_value").toString();
        ui->comboBox_status->addItem(s);
    }
}

//下拉列表事件触发
void MainWindow::on_comboBox_status_activated(const QString &arg1)
{
    query_model=new QSqlQueryModel();
    query_model->setQuery("select e.id,e.examination_no,e.salesperson_name,e.status,e_s.examination_status_value,e.age,e.order_group_name,e.order_name from examination_status e_s,examination e where cast(e.status as varchar(10))=e_s.examination_status_code and e_s.examination_status_value='"+arg1+"'");
    ui->tableView_xiaohao->setModel(query_model);
    ui->tableView_xiaohao->show();
}
