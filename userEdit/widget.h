#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QGridLayout>
#include <QComboBox>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:

    /** 左侧*/
    QLabel *UserNameLabel; QLineEdit *UserNameLineEdit;
    QLabel *NameLabel; QLineEdit NameLineEdit;
    QLabel *SexLabel; QComboBox *SexComboBox;
    QLabel *DepartmentLabel; QTextEdit *DepartmentTextEdit;
    QLabel *AgeLabel; QLineEdit *AgeLineEdit;
    QLabel *OtherLabel; QGridLayout *leftLayout;

    /** 右侧*/
    QLabel *HeadLabel; QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn; QHBoxLayout *TopRightLayout;
    QLabel *IntroductionLabel; QTextEdit *IntroductionTextEdit;
    QVBoxLayout *RightLayout;

    /** 底部*/
    QPushButton *OkBtn, *CancelBtn;
    QHBoxLayout *ButtonLayout;
};

#endif // WIDGET_H
