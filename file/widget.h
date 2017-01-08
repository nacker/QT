#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

#pragma execution_character_set("utf-8")

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QPushButton *btn1;

private slots:
    void on_clicked();
};

#endif // WIDGET_H
