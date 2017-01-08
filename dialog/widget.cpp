#include "widget.h"
#include <QHBoxLayout>
#include <QFileDialog>
#include <QColorDialog>
#include <QColor>
#include <QFontDialog>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

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

void Widget::on_clicked()
{
//    QString s = QFileDialog::getOpenFileName(this,"打开文件");
//    QString s = QFileDialog::getOpenFileName(this,"open file dialog", "/","c++ files(*.cpp)::c files(*.c)::Head files(*.h)");

//    if (!s.isEmpty())
//        setWindowTitle(s);

    // 打开取色板
//    QColorDialog::getColor();

//    QColor c = QColorDialog::getColor(Qt::blue);

    // 字体
//    bool ok;
//    QFontDialog::getFont(&ok);
//    if (ok){
//        setWindowTitle("true");
//    }else {
//        setWindowTitle("false");
//    }

    // QMessageBox
//    if (QMessageBox::question(this,tr("Question消息框"),
//                              tr("您现在已经修改完成,是否要结束程序?"),
//                              QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok) == QMessageBox::Ok){
//        setWindowTitle("true");
//    }else {
//        setWindowTitle("false");
//    }

//    QMessageBox::information(this,"提示","这是一个悲伤的爱情故事");

    // warning
//    if (QMessageBox::warning(this,tr("warning消息框"),
//                              tr("您现在已经修改完成,是否要结束程序?"),
//                              QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel,
//                             QMessageBox::Save) == QMessageBox::Save){
//        setWindowTitle("true");
//    }else {
//       setWindowTitle("false");
//    }

    // critical
//    QMessageBox::critical(this,"提示","这是一个悲伤的爱情故事");

    // about
    QMessageBox::about(this,"关于","版权所有");
}
