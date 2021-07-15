//
// Created by xtx on 2021/7/15.
//

#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "ui_hello.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget();  //主窗口
    Ui::Form createUi;  //createUi并不是一个真正的窗口
    createUi.setupUi(w);  //createUi是创建GUI的工具
    w->show();  //w是真正的窗口

    return a.exec();
}