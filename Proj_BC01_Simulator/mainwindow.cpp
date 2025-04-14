#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../BC01_GENERIC_POINT/BC01_GENERIC_POINT.h"
#include "../BC02_POINT_TYPA/BC02_POINT_TYPA.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*

    */
}

MainWindow::~MainWindow()
{
    delete ui;
}
