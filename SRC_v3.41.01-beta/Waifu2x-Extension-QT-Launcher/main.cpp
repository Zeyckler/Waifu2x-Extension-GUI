#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);//高分辨率屏幕下按实际像素渲染图标与图片,避免模糊
    QApplication a(argc,argv);
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}
