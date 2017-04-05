#include "d_printer.h"
#include "ui_d_printer.h"
#include<QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QFileDialog>
#include <QToolBar>
#include <QVBoxLayout>
#include "report/examination_report.h"
#include <QPainter>
#include "report/report1.h"
#include <QList>
#include <QPoint>
#pragma execution_character_set("utf-8")

report1 *r1;
d_printer::d_printer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::d_printer)
{
    ui->setupUi(this);
    QAction *action_print = new QAction(tr("打印"),this);
    //    QAction *action_printPreview = new QAction(tr("打印预览"),this);
     //   QAction *action_pdf = new QAction(tr("生成pdf"),this);
    //    connect(action_print,SIGNAL(triggered()),this,SLOT(doPrint()));
      //  connect(action_printPreview,SIGNAL(triggered()),this,SLOT(doPrintPreview()));
      //  connect(action_pdf,SIGNAL(triggered()),this,SLOT(createPdf()));
        QToolBar *tb = new QToolBar(this);
        tb->addAction(action_print);
       // tb->addAction(action_printPreview);
       // tb->addAction(action_pdf);
        tb->show();
        r1=new report1();
        ui->scrollArea->setWidget(r1);
}

d_printer::~d_printer()
{
    delete ui;
}

// 打印
void d_printer::doPrint(QList<QWidget *> wids)
{
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dlg(&printer, this);
    if (dlg.exec() == QDialog::Accepted) {
        for(int i=0;i<wids.size();i++){
            QPixmap image;
            QPainter painter(&printer);
            image = wids.at(i)->grab(QRect(QPoint(0,0),QSize(681,821)));
            QRect rect = painter.viewport();
            QSize size = image.size();
            size.scale(rect.size(),Qt::KeepAspectRatio);
            painter.setViewport(rect.x(), rect.y(),size.width(), size.height());
            painter.setWindow(image.rect());
            painter.drawPixmap(0,0,image);
        }

    }
}

void d_printer::doPrint(QList<QPixmap> pixs)
{

    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dlg(&printer, this);
    if (dlg.exec() == QDialog::Accepted) {
        QPainter painter(&printer);

            QRect rect = painter.viewport();
            QSize size = pixs.at(0).size();
            size.scale(rect.size(),Qt::KeepAspectRatio);
            painter.setViewport(rect.x(), rect.y(),size.width(), size.height());
            painter.setWindow(pixs.at(0).rect());



            //QPixmap pix=QPixmap();
           // pix.load(":/new/picture/1.png");
            for(int i=0;i<pixs.size();i++){
                painter.drawPixmap(0,0,pixs.at(0));
                if(i!=pixs.size()-1){
                    printer.newPage();
                }
            }


             //   QPixmap pix1=pixs.at(1);
               painter.drawPixmap(0,0,pixs.at(1));

        }
}

// 打印预览
void d_printer::doPrintPreview()
{
    QPrinter printer;

    // 创建打印预览对话框
    QPrintPreviewDialog preview(&printer, this);

    // 当要生成预览页面时，发射paintRequested()信号
    connect(&preview, SIGNAL(paintRequested(QPrinter*)),
                  this,SLOT(printPreview(QPrinter*)));

    preview.exec();
}

void d_printer::printPreview(QPrinter *printer)
{
        r1=new report1();
        QPixmap pixmap;
        pixmap=ui->scrollArea->grab(QRect(QPoint(0,0),QSize(681,721)));
        QPainter paint(printer);
        QRect rect = paint.viewport();
        QSize size = pixmap.size();
        size.scale(rect.size(),Qt::KeepAspectRatio);
        paint.setViewport(rect.x(), rect.y(),size.width(), size.height());
        paint.setWindow(pixmap.rect());
        paint.drawPixmap(0,0,pixmap);
}

// 生成PDF文件
void d_printer::createPdf()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                    QString(), "*.txt");
    if (!fileName.isEmpty()) {
        // 如果文件后缀为空，则默认使用.pdf
        if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".txt");
        QPrinter printer;
        // 指定输出格式为pdf
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        ui->textEdit->print(&printer);
    }
}
