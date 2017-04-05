#include "parse_json.h"
#include"report/examination_login.h"
#include "config_file.h"
#pragma execution_character_set("utf-8")

parse_json::parse_json()
{
    m_netMan=new QNetworkAccessManager(this);
    examination_login *e=new examination_login();
    byteArray = getBackData(e->getText());
}

QByteArray parse_json::getBackData(QString str)
{
    Qconfig_file qff;
    QString str_url = qff.get_http_url();
    qDebug() << str_url;
    QString szRequest="http://www.elepick.com:9100/api/report?examination_no="+str;
    QUrl url(szRequest);
    QNetworkReply* reply=m_netMan->get(QNetworkRequest(url));
    QEventLoop eventLoop;
        connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
        eventLoop.exec(QEventLoop::ExcludeUserInputEvents);
    if(reply->error()==QNetworkReply::NoError)
    {
         QByteArray bytes=reply->readAll();
         byteArray=bytes;
    }
    reply->deleteLater();
    return byteArray;
}

QByteArray parse_json::getIcon(QString str){
    QString szRequest=str;
    QUrl url(szRequest);
    QNetworkReply* reply=m_netMan->get(QNetworkRequest(url));
    QEventLoop eventLoop;
        connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
        eventLoop.exec(QEventLoop::ExcludeUserInputEvents);
    if(reply->error()==QNetworkReply::NoError)
    {
         QByteArray bytes=reply->readAll();
           byteArray1=bytes;
    }
    reply->deleteLater();
    return byteArray1;
}

person parse_json::getPersonData(){
    person p=person();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("person")){
                QJsonValue value = object.value("person");
                QJsonObject object1 = value.toObject();
                QJsonValue value1=object1.value("examination_no");
                p.examination_no=value1.toString();
                value1=object1.value("name");
                p.name=value1.toString();
                value1=object1.value("age");
                p.age=value1.toInt();
                value1=object1.value("checkup_date");
                p.checkup_date=value1.toString();
                value1=object1.value("image_url");
                p.image_url=value1.toString();
                value1=object1.value("sex");
                p.sex=value1.toInt();
                value1=object1.value("birthday");
                p.birthday=value1.toString();
                value1=object1.value("nation");
                p.nation=value1.toString();
                value1=object1.value("married");
                p.married=value1.toBool();
                value1 = object1.value("email");
                p.email=value1.toString();
                value1=object1.value("card_no");
                p.card_no=value1.toString();
                value1=object1.value("address");
                p.address=value1.toString();
                value1=object1.value("cellphone");
                p.cellphone=value1.toString();
                value1=object1.value("phone");
                p.phone=value1.toString();
                value1=object1.value("enterprise");
                p.enterprise=value1.toString();
         //       qDebug()<<"2"<<p.examination_no<<p.checkup_date<<p.image_url<<p.name<<p.sex<<p.birthday<<p.age<<p.nation<<p.married<<p.email<<p.card_no<<p.address<<p.cellphone<<p.phone<<p.enterprise;
            }
        }
    }
    return p;
}

info parse_json::getInfoData(){
    info i=info();
   document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("info")){
                QJsonValue value=object.value("info");
                QJsonObject object1=value.toObject();
                value=object1.value("contact_phone");
            }
        }
    }
    return i;
}

QList<sales> parse_json::getSaleData(){
    QList<sales> saless;
    sales sal=sales();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("sales")){
                QJsonValue value=object.value("sales");
                object=value.toObject();
                         value=object.value("sale_details");
                QJsonArray array = value.toArray();
                for(int i=0;i<array.size();i++){
                    QJsonObject object = array.at(i).toObject();
                    QJsonValue value=object.value("department_name");
                    QJsonValue value1=object.value("checkup_name");
                    QJsonValue value2=object.value("checkup_status");
                    sal.checkup_name=value1.toString();
                    sal.department_name=value.toString();
                    sal.checkup_status=value2.toString();
                    saless.append(sal);
                }
            }
        }
    }
    return saless;
}

QList<health> parse_json::getHealthData(){
    QList<health> healths;
    health hea=health();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("health")){
                QJsonValue value=object.value("health");
                object =value.toObject();
                value=object.value("health_details");
                object=value.toObject();
                value=object.value("体检情况");
                QJsonArray array=value.toArray();
                for(int i=0;i<array.size();i++){
                    QJsonObject object1=array.at(i).toObject();
                    value=object1.value("name");
                    hea.name=value.toString();
                    value=object1.value("selected");
                    hea.selected=value.toBool();
                    healths.append(hea);
                }
                value=object.value("家族病史");
                QJsonArray array1=value.toArray();
                for(int i=0;i<array1.size();i++){
                    QJsonObject object1=array1.at(i).toObject();
                    value=object1.value("name");
                    hea.name=value.toString();
                    value=object1.value("selected");
                    hea.selected=value.toBool();
                    healths.append(hea);
                }
                value=object.value("既往体检异常情况");
                QJsonArray array2=value.toArray();
                for(int i=0;i<array2.size();i++){
                    QJsonObject object1=array2.at(i).toObject();
                    value=object1.value("name");
                    hea.name=value.toString();
                    value=object1.value("selected");
                    hea.selected=value.toBool();
                    healths.append(hea);
                }
                value=object.value("既往史");
                QJsonArray array3=value.toArray();
                for(int i=0;i<array3.size();i++){
                    QJsonObject object1=array3.at(i).toObject();
                    value=object1.value("name");
                    hea.name=value.toString();
                    value=object1.value("selected");
                    hea.selected=value.toBool();
                    healths.append(hea);
                }

            }
        }
    }
    return healths;
}

QList<dept> parse_json::getDeptData(){
    QList<dept> depts;
    dept dep=dept();
    check_item check_ite=check_item();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("checkups")){
                QJsonValue value=object.value("checkups");
                QJsonArray arr=value.toArray();
                for(int i=0;i<arr.size();i++){
                    QList<check_item> check_items;
                    QJsonObject obj=arr.at(i).toObject();
                    QJsonValue val = obj.value("dept");
                    dep.deptName=val.toString();
                    val=obj.value("diagnose");
                    dep.diagnose=val.toString();
                    val=obj.value("docter");
                    dep.docter=val.toString();
                    val=obj.value("user");
                    dep.user=val.toString();
                    val=obj.value("pre");
                    dep.pre=val.toString();
                    val=obj.value("items");
                    QJsonArray arr1=val.toArray();
                    for(int j=0;j<arr1.size();j++){
                        QJsonObject obj1 = arr1.at(j).toObject();
                        QJsonValue val1=obj1.value("name");
                        check_ite.name=val1.toString();
                        val1=obj1.value("value");
                        check_ite.value=val1.toString();
                        val1=obj1.value("ref");
                        check_ite.ref=val1.toString();
                        val1=obj1.value("unit");
                        check_ite.unit=val1.toString();
                        check_items.append(check_ite);
                    }
                    dep.items=check_items;
                    depts.append(dep);
                }
            }
        }
    }
    return depts;
}

QList<specs> parse_json::getSpecsData(){
    QList<specs> specss;
    specs spec=specs();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("analyse")){
                QJsonValue value=object.value("analyse");
                object = value.toObject();
                value = object.value("specs");
                QString doctor=object.value("doctor").toString();
                QJsonArray array = value.toArray();
                for(int i=0;i<array.size();i++){
                    QJsonObject obj=array.at(i).toObject();
                    QJsonValue val=obj.value("checkup");
                    spec.checkup=val.toString();
                    val=obj.value("advice");
                    spec.advice=val.toString();
                    val=obj.value("result");
                    spec.result=val.toString();
                    spec.doctor=doctor;
                    specss.append(spec);
                }
            }
        }
    }
    return specss;
}

final parse_json::getFinalData(){
    final fina=final();
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("final")){
                QJsonValue value = object.value("final");
                object = value.toObject();
                value = object.value("time");
                fina.m_time=value.toString();
                value = object.value("final");
                fina.m_final=value.toString();
                value = object.value("doctor");
                fina.m_doctor=value.toString();
            }
        }
    }
    return fina;
}

QList<images> parse_json::getImagesData(){
    QList<images> imagess;
    images image=images();
    checkup_picture checkup_pic=checkup_picture();
    QList<items_picture> items_pictures;
    items_picture items_pic=items_picture();
    QList<QString> image_url;
    document = QJsonDocument::fromJson(byteArray,&jsonError);
    if(!document.isNull() && (jsonError.error == QJsonParseError::NoError)){
        if(document.isObject()){
            QJsonObject object = document.object();
            if(object.contains("images")){
                QJsonValue value = object.value("images");
                QJsonArray array=value.toArray();
                for(int i=0;i<array.size();i++){
                    QJsonObject obj = array.at(i).toObject();
                    QJsonValue val = obj.value("checkup");
                    checkup_pic.checkup_pic_name=val.toString();
                    val=obj.value("result");
                    checkup_pic.checkup_pic_result=val.toString();
                    val=obj.value("images");
                    QJsonArray arr=val.toArray();
                    for(int j=0;j<arr.size();j++){
                        QJsonValue val1=arr.at(j);
                        image_url.append(val1.toString());
                    }
                    QJsonArray arr1 = obj.value("items").toArray();
                    for(int k=0;k<arr1.size();k++){
                       QJsonObject obj1 =  arr1.at(k).toObject();
                       QJsonValue val2 = obj1.value("name");
                       items_pic.items_pic_name=val2.toString();
                       val2 = obj1.value("value");
                       items_pic.items_pic_value=val2.toString();
                       items_pictures.append(items_pic);
                    }
                    checkup_pic.checkup_pic_img=image_url;
                    image.m_checkup_pic=checkup_pic;
                    image.m_items_pic=items_pictures;
                    imagess.append(image);
                    image_url.clear();
                    items_pictures.clear();
                }
            }
        }
    }
    return imagess;
}
