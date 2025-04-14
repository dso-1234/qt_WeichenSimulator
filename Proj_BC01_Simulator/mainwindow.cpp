#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialisiere die LEDs und Buttons
    connect(ui->cmdLeButton, &QPushButton::clicked, this, &MainWindow::onCmdLeClicked);
    connect(ui->cmdRiButton, &QPushButton::clicked, this, &MainWindow::onCmdRiClicked);
    connect(ui->errorQuit1Button, &QPushButton::clicked, this, &MainWindow::onErrorQuitClicked);
    connect(ui->errorQuit2Button, &QPushButton::clicked, this, &MainWindow::onErrorQuitClicked);
    connect(ui->errorQuit3Button, &QPushButton::clicked, this, &MainWindow::onErrorQuitClicked);

    // Setze den Anfangszustand
    updateState("INVALID");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateState(const QString &state)
{
    ui->stateLabel->setText("Zustand IST: " + state);

    // Beispiel: Zustandsabhängige LED-Anzeige
    if (state == "END_L") {
        ui->ledEndL->setStyleSheet("background-color: green;");
        ui->ledEndR->setStyleSheet("background-color: gray;");
    } else if (state == "END_R") {
        ui->ledEndL->setStyleSheet("background-color: gray;");
        ui->ledEndR->setStyleSheet("background-color: green;");
    } else {
        ui->ledEndL->setStyleSheet("background-color: gray;");
        ui->ledEndR->setStyleSheet("background-color: gray;");
    }
}

void MainWindow::onCmdLeClicked()
{
    // Logik für das Kommando "Weiche nach Links"
    updateState("END_L");
    animateSwitchPosition(0); // 0 = Links
}

void MainWindow::onCmdRiClicked()
{
    // Logik für das Kommando "Weiche nach Rechts"
    updateState("END_R");
    animateSwitchPosition(2); // 2 = Rechts
}

void MainWindow::onErrorQuitClicked()
{
    // Logik für das Quittieren von Fehlern
    QMessageBox::information(this, "Error Quit", "Fehler quittiert!");
}

void MainWindow::animateSwitchPosition(int position)
{
    if (ui->switchGraphic) {
        QPropertyAnimation *animation = new QPropertyAnimation(ui->switchGraphic, "geometry");
        animation->setDuration(1000);

        if (position == 0) { // Links
            animation->setEndValue(QRect(50, 100, 50, 50));
        } else if (position == 1) { // Mitte
            animation->setEndValue(QRect(150, 100, 50, 50));
        } else if (position == 2) { // Rechts
            animation->setEndValue(QRect(250, 100, 50, 50));
        }

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    } else {
        qDebug() << "switchGraphic is not defined in the UI.";
    }
}
