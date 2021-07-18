//
// Created by xtx on 2021/7/15.
//

#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "ui_m1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget();  //主窗口
    Ui::M1 Ui;  //Ui并不是一个真正的窗口
    Ui.setupUi(w);  //Ui是创建GUI的工具
    Ui.connect(Ui.pushButton,&QPushButton::clicked,Ui,&Ui_M1::Hello);
    w->show();  //w是真正的窗口
    
    return a.exec();
}