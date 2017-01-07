#include "dialog.h"
#include <QGridLayout>
#include <QWidget>

#include <QDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    btn = new QPushButton(this);

    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(btn,0,0);

    // 将btn的点击事件和add函数关联
    connect(btn, SIGNAL(clicked()),this,SLOT(btnClick()));
}

Dialog::~Dialog()
{

}

void Dialog::btnClick()
{
//    QWidget *window = new QWidget();
//    window->resize(320,240);
//    window->show();

//    QPushButton *button = new QPushButton(tr("press me"),window);
//    button->move(100,100);
//    button->show();

    QDialog window;
    window.resize(320,240);
    window.exec();
}
