#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//#if (QT_VERSION < QT_VERSION_CHECK(5,0,0))
//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
//    QTextCodec::setCodecForLocale(codec);
//    QTextCodec::setCodecForCStrings(codec);
//    QTextCodec::setCodecForTr(codec);
//#else
//    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
//#endif


    Widget w;
    w.show();

//    // 以下部分解决中文乱码
//        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
//    // 以上部分解决中文乱码

    return a.exec();
}
