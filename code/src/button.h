#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>

namespace Ui {
class button;
}

class button : public QWidget
{
    Q_OBJECT

public:
    explicit button(QWidget *parent = 0);
    ~button();

private slots:
    void on_pushButton_preview_clicked();

private:
    Ui::button *ui;
};

#endif // BUTTON_H
