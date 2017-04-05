#include "report/report5.h"
#include "ui_report5.h"
#pragma execution_character_set("utf-8")

report5::report5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report5)
{
    ui->setupUi(this);
    par=new parse_json();
    depts=par->getDeptData();
    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    setUserInfo();
}

report5::~report5()
{
    delete ui;
}

void report5::setUserInfo(){

    person p=par->getPersonData();
    ui->lineEdit_name->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name->setStyleSheet("border:none;");
    ui->lineEdit_name->setText(p.name);

    ui->lineEdit_sex->setAlignment(Qt::AlignCenter);
    ui->lineEdit_sex->setStyleSheet("border:none;");
    if(p.sex==2){
        ui->lineEdit_sex->setText("女");
    }else{
        ui->lineEdit_sex->setText("男");
    }
    ui->lineEdit_age->setAlignment(Qt::AlignCenter);
    ui->lineEdit_age->setStyleSheet("border:none;");
    ui->lineEdit_age->setText(QString::number(p.age,10));

    ui->lineEdit_date->setAlignment(Qt::AlignCenter);
    ui->lineEdit_date->setStyleSheet("border:none;");
    ui->lineEdit_date->setText(p.checkup_date);
}


void report5::setTableData(int page){
    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderItem(0, new QStandardItem("项目"));
    model->setHorizontalHeaderItem(1, new QStandardItem("检查结果"));
    if(count==page){
        if(  getArray("耳鼻喉科").deptName!=""){
            dept dep=getArray("耳鼻喉科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+1==page){
        if(  getArray("眼科").deptName!=""){
            dept dep=getArray("眼科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+2==page){
        if(  getArray("口腔科").deptName!=""){
            dept dep=getArray("口腔科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+3==page){
        if(  getArray("乳腺彩超").deptName!=""){
            dept dep=getArray("乳腺彩超");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+4==page){
        if(  getArray("盆腔超声").deptName!=""){
            dept dep=getArray("盆腔超声");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+5==page){
        if(  getArray("内科").deptName!=""){
            dept dep=getArray("内科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+6==page){
        if(  getArray("肿瘤检测").deptName!=""){
            dept dep=getArray("肿瘤检测");
            model->setHorizontalHeaderItem(2, new QStandardItem("参考值"));
            model->setHorizontalHeaderItem(3, new QStandardItem("单位"));
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        items.append(new QStandardItem(dep.items[i].ref));
                        items.append(new QStandardItem(dep.items[i].unit));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+7==page){
        if(  getArray("一般检查").deptName!=""){
            dept dep=getArray("一般检查");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+8==page){
        if(  getArray("心电图").deptName!=""){
            dept dep=getArray("心电图");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+9==page){
        if(  getArray("生化检验").deptName!=""){
            dept dep=getArray("生化检验");
            model->setHorizontalHeaderItem(2, new QStandardItem("参考值"));
            model->setHorizontalHeaderItem(3, new QStandardItem("单位"));
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        items.append(new QStandardItem(dep.items[i].ref));
                        items.append(new QStandardItem(dep.items[i].unit));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+10==page){
        if(  getArray("外科").deptName!=""){
            dept dep=getArray("外科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+11==page){
        if(  getArray("妇科").deptName!=""){
            dept dep=getArray("妇科");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+12==page){
        if(  getArray("尿常规").deptName!=""){
            dept dep=getArray("尿常规");
            model->setHorizontalHeaderItem(2, new QStandardItem("参考值"));
            model->setHorizontalHeaderItem(3, new QStandardItem("单位"));
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        items.append(new QStandardItem(dep.items[i].ref));
                        items.append(new QStandardItem(dep.items[i].unit));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+13==page){
        if(  getArray("腹部超声").deptName!=""){
            dept dep=getArray("腹部超声");
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }
    if(count+14==page){
        if(  getArray("血常规").deptName!=""){
            dept dep=getArray("血常规");
            model->setHorizontalHeaderItem(2, new QStandardItem("参考值"));
            model->setHorizontalHeaderItem(3, new QStandardItem("单位"));
            for(int i=0;i<dep.items.size();i++){
                        QList<QStandardItem *> items;
                        items.append(new QStandardItem(dep.items[i].name));
                        items.append(new QStandardItem(dep.items[i].value));
                        items.append(new QStandardItem(dep.items[i].ref));
                        items.append(new QStandardItem(dep.items[i].unit));
                        model->insertRow(i,items);
                        ui->label_name->setText(dep.deptName);
            }
            ui->tableView->setModel(model);
        }else{
            count--;
        }
    }

//    if(check_items[0].ref!=""){
//         model->setHorizontalHeaderItem(2, new QStandardItem("参考值"));
//         model->setHorizontalHeaderItem(3, new QStandardItem("单位"));
//         for(int i=0;i<check_items.size();i++){
//             QList<QStandardItem *> items;
//             items.append(new QStandardItem(check_items[i].name));
//             items.append(new QStandardItem(check_items[i].value));
//             items.append(new QStandardItem(check_items[i].ref));
//             items.append(new QStandardItem(check_items[i].unit));
//             model->insertRow(i,items);
//         }
//    }else if(check_items[0].unit!=""){
//         model->setHorizontalHeaderItem(2, new QStandardItem("单位"));

//         for(int i=0;i<check_items.size();i++){
//             QList<QStandardItem *> items;
//             items.append(new QStandardItem(check_items[i].name));
//             items.append(new QStandardItem(check_items[i].value));
//             items.append(new QStandardItem(check_items[i].unit));
//             model->insertRow(i,items);

//         }
//    }else{

//        for(int i=0;i<check_items.size();i++){
//            QList<QStandardItem *> items;
//            items.append(new QStandardItem(check_items[i].name));
//            items.append(new QStandardItem(check_items[i].value));
//            model->insertRow(i,items);
//        }
//    }


}

dept report5::getArray(QString str){
    for(int i=0;i<depts.size();i++){
        if(depts.at(i).deptName==str){
            return depts.at(i);
        }
    }
    return dept();
}
