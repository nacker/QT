#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit1 = new QLineEdit;
    edit2 = new QLineEdit;

    label1 = new QLabel;
    label2 = new QLabel;

    label1->setText(tr("name"));
    label2->setText(tr("age"));

    btn1 = new QPushButton;
    btn2 = new QPushButton;

    btn1->setText(tr("ok"));
    btn2->setText(tr("cancel"));

//    QVBoxLayout *layout_main = new QVBoxLayout(this);
//    QHBoxLayout *layout1 = new QHBoxLayout();
//    QHBoxLayout *layout2 = new QHBoxLayout();
//    QHBoxLayout *layout3 = new QHBoxLayout();

//    layout1->addWidget(label1);
//    layout1->addWidget(edit1);
//    layout2->addWidget(label2);
//    layout2->addWidget(edit2);
//    layout3->addWidget(btn1);
//    layout3->addWidget(btn2);
//    layout_main->addLayout(layout1);
//    layout_main->addLayout(layout2);
//    layout_main->addLayout(layout3);



    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(label1, 0, 0);
    layout->addWidget(edit1, 0, 1);
    layout->addWidget(label2, 1, 0);
    layout->addWidget(edit2, 1, 1);
    layout->addWidget(btn1, 2, 0);
    layout->addWidget(btn2, 2, 1);
}

Widget::~Widget()
{

}
