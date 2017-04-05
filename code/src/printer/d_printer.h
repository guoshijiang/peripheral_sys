#ifndef D_PRINTER_H
#define D_PRINTER_H

#include <QWidget>
#include <QtPrintSupport/QPrinter>

namespace Ui {
class d_printer;
}

class d_printer : public QWidget
{
    Q_OBJECT

public:
    explicit d_printer(QWidget *parent = 0);
    void doPrint(QList<QWidget *> wids);
    ~d_printer();
    void doPrintPreview();
    void doPrint(QList<QPixmap> pixs);

private slots:


    void printPreview(QPrinter *printer);
    void createPdf();
private:
    Ui::d_printer *ui;
};

#endif // D_PRINTER_H
