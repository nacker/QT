#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>

drawer::drawer()
{
    setWindowTitle("My QQ");

    w = new Widget(this);
    w->resize(200,100);

    toolBtn1 = new QToolButton;
    toolBtn1->setText("苍井空");
    toolBtn1->setIcon(QPixmap("1.png"));
//    toolBtn1->setIconSize(QPixmap("1.png").size());
    toolBtn1->setIconSize(QSize(45, 45));
    toolBtn1->setAutoRaise(true);
    toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn2 = new QToolButton;
    toolBtn2->setText("小泽玛利亚");
    toolBtn2->setIcon(QPixmap("2.png"));
//    toolBtn2->setIconSize(QPixmap("1.png").size());
    toolBtn2->setIconSize(QSize(45, 45));
    toolBtn2->setAutoRaise(true);
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn3 = new QToolButton;
    toolBtn3->setText("桥本凉");
    toolBtn3->setIcon(QPixmap("3.jpg"));
//    toolBtn3->setIconSize(QPixmap("1.png").size());
    toolBtn3->setIconSize(QSize(45, 45));
    toolBtn3->setAutoRaise(true);
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn4 = new QToolButton;
    toolBtn4->setText("桥本凉");
    toolBtn4->setIcon(QPixmap("2.png"));
//    toolBtn4->setIconSize(QPixmap("1.png").size());
    toolBtn4->setIconSize(QSize(45, 45));
    toolBtn4->setAutoRaise(true);
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *groupBox1 = new QGroupBox;
    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setMargin(10);                     // 布局各窗体显示的间距
    layout1->setAlignment(Qt::AlignLeft);    // 布局各窗体显示的位置
    layout1->addWidget(toolBtn1);
    layout1->addWidget(toolBtn2);
    layout1->addStretch();                      // 插入一个占位符

    QGroupBox *groupBox2 = new QGroupBox;
    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);                     // 布局各窗体显示的间距
    layout2->setAlignment(Qt::AlignLeft);    // 布局各窗体显示的位置
    layout2->addWidget(toolBtn3);
    layout2->addWidget(toolBtn4);
    layout2->addStretch();                      // 插入一个占位符

    this->addItem((QWidget *)groupBox1,"我的好友");
    this->addItem((QWidget *)groupBox2,"陌生人");

    connect(toolBtn1, SIGNAL(clicked()),this,SLOT(showWidget()));
    connect(toolBtn2, SIGNAL(clicked()),this,SLOT(showWidget()));
    connect(toolBtn3, SIGNAL(clicked()),this,SLOT(showWidget()));
    connect(toolBtn4, SIGNAL(clicked()),this,SLOT(showWidget()));
}

void drawer:: showWidget()
{
    w->show();

}
