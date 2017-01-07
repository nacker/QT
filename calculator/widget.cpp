#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString s1 = ui->num1->text();
    QString s2 = ui->num2->text();
    int i1 = s1.toInt();
    int i2 = s2.toInt();
    ui->label->setText(QString::number(i1+i2));
}
