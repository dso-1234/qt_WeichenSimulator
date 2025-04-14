#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::checkLogin);
}

void MainWindow::checkLogin() {
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "secret") {
        QMessageBox::information(this, "Success", "Login successful!");
    } else {
        QMessageBox::warning(this, "Error", "Invalid username or password");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
