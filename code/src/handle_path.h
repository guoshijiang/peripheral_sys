#ifndef HANDLE_FILE_H
#define HANDLE_FILE_H
#include<QDir>
#include <QFile>
#include <QDebug>
#include <QRegExp>
#include <stdio.h>

#define OPEN_FILE_ERR   1000 //打开文件失败错误码
#define CLOSE_FILE_ERR  1001 //关闭文件错误定义

class Qhandle_path
{
public:
    Qhandle_path();
    ~Qhandle_path();
    QString Qhandle_path::Qget_log_path();
    QString Qhandle_path::Qget_etc_path();
private:
    QString m_dir_path;
public:
    QString m_getcon_path;
    QString m_log_path;
};

#endif
