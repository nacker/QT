#include "widget.h"
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QFrame>
#include <QGridLayout>
#include <QPixmap>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // 设置窗口标题

//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");

    setWindowTitle(tr("用户信息"));

}

Widget::~Widget()
{

}
