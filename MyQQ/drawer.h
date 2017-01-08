#ifndef DRAWER_H
#define DRAWER_H

#include <QWidget>
#include <QToolBox>
#include <QtoolButton>
#include "widget.h"

#pragma execution_character_set("utf-8")

class drawer : public QToolBox
{
public:
    drawer();

private:
    Widget *w;

    QToolButton *toolBtn1;
    QToolButton *toolBtn2;
    QToolButton *toolBtn3;
    QToolButton *toolBtn4;

public slots:
    void showWidget();
};

#endif // DRAWER_H
