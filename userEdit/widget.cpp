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

    /** 左侧*/
    UserNameLabel = new QLabel(tr("用户名:"));
    UserNameLineEdit = new QLineEdit;

    NameLabel = new QLabel(tr("姓名:"));
    NameLineEdit = new QLineEdit;

    SexLabel = new QLabel(tr("性别:"));
    SexComboBox = new QComboBox;
    SexComboBox->addItem(tr("男"));
    SexComboBox->addItem(tr("女"));

    DepartmentLabel = new QLabel(tr("部门:"));
    DepartmentTextEdit = new QTextEdit;

    AgeLabel = new QLabel(tr("年龄:"));
    AgeLineEdit = new QLineEdit;

    OtherLabel = new QLabel(tr("备注:"));
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    leftLayout = new QGridLayout();
    // 用户名
    leftLayout->addWidget(UserNameLabel,0,0);
    leftLayout->addWidget(UserNameLineEdit,0,1);

    // 姓名
    leftLayout->addWidget(NameLabel,1,0);
    leftLayout->addWidget(NameLineEdit,1,1);

    // 性别
    leftLayout->addWidget(SexLabel,2,0);
    leftLayout->addWidget(SexComboBox,2,1);

    // 部门
    leftLayout->addWidget(DepartmentLabel,3,0);
    leftLayout->addWidget(DepartmentTextEdit,3,1);

    // 年龄
    leftLayout->addWidget(AgeLabel,4,0);
    leftLayout->addWidget(AgeLineEdit,4,1);

    // 其他
    leftLayout->addWidget(OtherLabel,5,0,1,2);

    leftLayout->setColumnStretch(0,1); // 设置QGridLayout占位比例
    leftLayout->setColumnStretch(1,3); //

    /** 右侧*/
    HeadLabel = new QLabel(tr("头像: "));
    HeadIconLabel = new QLabel;

    QPixmap icon("1.jpg");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(),icon.height());

    UpdateHeadBtn = new QPushButton(tr("更新"));

    TopRightLayout = new QHBoxLayout();
    TopRightLayout->setSpacing(20);
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);

    // 个人说明
    IntroductionLabel = new QLabel(tr("个人说明"));
    IntroductionTextEdit = new QTextEdit;


    RightLayout = new QVBoxLayout();
    RightLayout->setMargin(10); //设置边距
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);

    /** 底部*/
    OkBtn = new QPushButton(tr("确定"));
    CancelBtn = new QPushButton(tr("取消"));

    ButtonLayout = new QHBoxLayout();
    ButtonLayout->addStretch(); //加入一个占位符
    ButtonLayout->addWidget(OkBtn);
    ButtonLayout->addWidget(CancelBtn);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(leftLayout,0,0);
    mainLayout->addLayout(RightLayout,0,1);
    mainLayout->addLayout(ButtonLayout,1,0,1,2);

    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}

Widget::~Widget()
{

}
