#include "report/report3.h"
#include "ui_report3.h"
#include <QPixmap>
#pragma execution_character_set("utf-8")

QImage pix;
QImage pix1;
QImage result;
QImage result1;
report3::report3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report3)
{
    ui->setupUi(this);
    par=new parse_json();
    hea=par->getHealthData();
    p=par->getPersonData();
    setPersonInfo();
    pix=QImage(":/new/picture/white1.png");
    pix1=QImage(":/new/picture/black1.png");
    result = pix.scaled(300,300).scaled(20,20,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    result1 = pix1.scaled(300,300).scaled(20,20,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    if(hea.size()>0){
        setJwsStatus();
        setJzbsStatus();
        setTjqkStatus();
        setJwtjycqkStatus();
    }

}

report3::~report3()
{
    delete ui;
}

void report3::setPersonInfo(){
    ui->lineEdit_name->setAlignment(Qt::AlignCenter);
    ui->lineEdit_name->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_name->setText(p.name);
    ui->lineEdit_sex->setAlignment(Qt::AlignCenter);
    ui->lineEdit_sex->setStyleSheet("border:none;border-bottom:1px solid black;");
    if(p.sex==2){
        ui->lineEdit_sex->setText("女");
    }else{
        ui->lineEdit_sex->setText("男");
    }
    ui->lineEdit_nation->setAlignment(Qt::AlignCenter);
    ui->lineEdit_nation->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_nation->setText(p.nation);

    ui->lineEdit_marital_status->setAlignment(Qt::AlignCenter);
    ui->lineEdit_marital_status->setStyleSheet("border:none;border-bottom:1px solid black;");
    if(p.married==true){
        ui->lineEdit_marital_status->setText("已婚");
    }else{
        ui->lineEdit_marital_status->setText("未婚");
    }
    ui->lineEdit_birthday->setAlignment(Qt::AlignCenter);
    ui->lineEdit_birthday->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_birthday->setText(p.birthday);

    ui->lineEdit_age->setAlignment(Qt::AlignCenter);
    ui->lineEdit_age->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_age->setText( QString::number(p.age, 10));

    ui->lineEdit_work_company->setAlignment(Qt::AlignCenter);
    ui->lineEdit_work_company->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_work_company->setText(p.enterprise);

    ui->lineEdit_telephone->setAlignment(Qt::AlignCenter);
    ui->lineEdit_telephone->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_telephone->setText(p.cellphone);

    ui->lineEdit_id->setAlignment(Qt::AlignCenter);
    ui->lineEdit_id->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_id->setText(p.card_no);

    ui->lineEdit_business_phone->setAlignment(Qt::AlignCenter);
    ui->lineEdit_business_phone->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_business_phone->setText(p.phone);

    ui->lineEdit_home_phone->setAlignment(Qt::AlignCenter);
    ui->lineEdit_home_phone->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_home_phone->setText(QStringLiteral(""));

    ui->lineEdit_email->setAlignment(Qt::AlignCenter);
    ui->lineEdit_email->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_email->setText(p.email);

    ui->lineEdit_communication_unit->setAlignment(Qt::AlignCenter);
    ui->lineEdit_communication_unit->setStyleSheet("border:none;border-bottom:1px solid black;");
    ui->lineEdit_communication_unit->setText(QStringLiteral(""));
}

void report3::setJwsStatus(){
    ui->label_jws_gxy->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_jhb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_fkjb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_nzz->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_dnjb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_gxb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_szjb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_qt->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_fxb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_gy->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_xjgs->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_ss->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_tnb->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_ws->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_zfg->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_zl->setPixmap(QPixmap::fromImage(result));
    ui->label_jws_w->setPixmap(QPixmap::fromImage(result));
    if(hea.at(30).selected==true){
        ui->label_jws_fxb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(31).selected==true){
        ui->label_jws_zfg->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(32).selected==true){
        ui->label_jws_dnjb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(33).selected==true){
        ui->label_jws_gxy->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(34).selected==true){
        ui->label_jws_gxb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(35).selected==true){
        ui->label_jws_tnb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(36).selected==true){
        ui->label_jws_jhb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(37).selected==true){
        ui->label_jws_szjb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(38).selected==true){
        ui->label_jws_ss->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(39).selected==true){
        ui->label_jws_ws->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(40).selected==true){
        ui->label_jws_xjgs->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(41).selected==true){
        ui->label_jws_zl->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(42).selected==true){
        ui->label_jws_fkjb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(43).selected==true){
        ui->label_jws_gy->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(44).selected==true){
        ui->label_jws_nzz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(45).selected==true){
        ui->label_jws_w->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(46).selected==true){
        ui->label_jws_qt->setPixmap(QPixmap::fromImage(result1));
    }

}

void report3::setJzbsStatus(){
    ui->label_jzbs_wz->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_nzz->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_gyh->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_gxb->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_jhb->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_xjgs->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_xyb->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_qtjb->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_exzl->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_w->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_gxy->setPixmap(QPixmap::fromImage(result));
    ui->label_jzbs_tnb->setPixmap(QPixmap::fromImage(result));
    if(hea.at(4).selected==true){
        ui->label_jzbs_gyh->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(5).selected==true){
        ui->label_jzbs_jhb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(6).selected==true){
        ui->label_jzbs_xjgs->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(7).selected==true){
        ui->label_jzbs_xyb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(8).selected==true){
        ui->label_jzbs_exzl->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(9).selected==true){
        ui->label_jzbs_gxb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(10).selected==true){
        ui->label_jzbs_w->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(11).selected==true){
        ui->label_jzbs_wz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(12).selected==true){
        ui->label_jzbs_nzz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(13).selected==true){
        ui->label_jzbs_qtjb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(14).selected==true){
        ui->label_jzbs_tnb->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(15).selected==true){
        ui->label_jzbs_gxy->setPixmap(QPixmap::fromImage(result1));
    }

}

void report3::setTjqkStatus(){
    ui->label_tjqk_mnyc->setPixmap(QPixmap::fromImage(result));
    ui->label_tjqk_lnyc->setPixmap(QPixmap::fromImage(result));
    ui->label_tjqk_lnys->setPixmap(QPixmap::fromImage(result));
    ui->label_tjqk_cwjy->setPixmap(QPixmap::fromImage(result));
    if(hea.at(0).selected==true){
        ui->label_tjqk_lnys->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(1).selected==true){
        ui->label_tjqk_lnyc->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(2).selected==true){
        ui->label_tjqk_cwjy->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(3).selected==true){
        ui->label_tjqk_mnyc->setPixmap(QPixmap::fromImage(result1));
    }
}

void report3::setJwtjycqkStatus(){
    ui->label_jwtjycqk_xyg->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_snz->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_kfxtg->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_fkyz->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_xzyc->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_lcnz->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_gnz->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_zgjl->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_dnjs->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_qtyc->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_dnxr->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_w->setPixmap(QPixmap::fromImage(result));
    ui->label_jwtjycqk_sjs->setPixmap(QPixmap::fromImage(result));
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_xyg->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(17).selected==true){
        ui->label_jwtjycqk_xzyc->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(18).selected==true){
        ui->label_jwtjycqk_snz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(19).selected==true){
        ui->label_jwtjycqk_w->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(20).selected==true){
        ui->label_jwtjycqk_kfxtg->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(21).selected==true){
        ui->label_jwtjycqk_sjs->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(22).selected==true){
        ui->label_jwtjycqk_qtyc->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(23).selected==true){
        ui->label_jwtjycqk_snz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_lcnz->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_zgjl->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_dnjs->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_dnxr->setPixmap(QPixmap::fromImage(result1));
    }
    if(hea.at(16).selected==true){
        ui->label_jwtjycqk_fkyz->setPixmap(QPixmap::fromImage(result1));
    }

}
