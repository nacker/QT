#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;


//    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
//    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

//        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
//        QTextCodec::setCodecForTr(codec);
//        QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
//        QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

    w.show();

    return a.exec();
}
