#include "dialog.h"
#include <QGridLayout>
#include <QByteArray>
#include <iostream>
#include <stdio.h>
#include <QDateTime>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    time1 = new QTimer(this);

    btn = new QPushButton(this);
    num1 = new QLineEdit(this);
    num2 = new QLineEdit(this);
    label = new QLabel(this);

    btn->setText("求和");
    label->setText("label");

    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(num1,0,0);
    layout->addWidget(num2,0,1);
    layout->addWidget(btn,1,0);
    layout->addWidget(label,1,1);

    // 将btn的点击事件和add函数关联
    connect(btn, SIGNAL(clicked()),this,SLOT(add()));


    connect(time1, SIGNAL(timeout()),this,SLOT(on_time()));
}

Dialog::~Dialog()
{

}

void Dialog::add()
{
    /*
    QString s1 = num1->text();
    QString s2 = num2->text();


    QString s3 = s1 + s2;
    s3 += "end";

    const char *s = s3.toStdString().data();
    char buf[100];
    memset(buf,0,sizeof(buf));
    strcpy(buf,s);
    QString s4 = buf;

    label->setText(s3);

    bool ok = false;
    int a = s1.toInt(&ok);
    if (ok == false) return;
    int b = s2.toInt(&ok);
    if (ok == false) return;
    label->setText(QString::number(a + b));

    */

    if (time1->isActive()){
        time1->stop();
    }else
        time1->start(1000);
}

void Dialog::on_time(){
//    static int i = 0;
//    setWindowTitle(QString::number(i++));

//    QDateTime *date1 = new QDateTime(QDateTime::currentDateTime());
//    setWindowTitle(date1->date().toString());

    QDateTime *date1 = new QDateTime(QDateTime::currentDateTime());
    QString s;
    s.sprintf("%d,%d,%d",date1->time().hour(),date1->time().minute(),date1->time().second());
    setWindowTitle(s);
}
