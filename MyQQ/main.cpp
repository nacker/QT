﻿#include "widget.h"
#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    drawer w;
    w.resize(200,400);
    w.show();

    return a.exec();
}
