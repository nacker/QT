#include "widget.h"
#include <QHBoxLayout>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn1 = new QPushButton;
    btn1->setText("对话框");
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(btn1);
    connect(btn1, SIGNAL(clicked()),this,SLOT(on_clicked()));
}

Widget::~Widget()
{

}

void Widget::on_clicked(){
    QString fileName = QFileDialog::getOpenFileName();
    QFile file(fileName);
    QString s;
    if (file.open(QFile::ReadOnly))
    {
        QTextStream stream(&file);

        // c语言读取文件
//        while (!stream.atEnd()) {
//            s = stream.readLine();

//            QMessageBox::information(this, "文件内容", s);
//        }

        // c++读取文件
        s = stream.readAll();
        QMessageBox::information(this, "文件内容", s);

        file.close();
    }

}
