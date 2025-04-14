#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCmdLeClicked();       // Slot für das Kommando "Weiche nach Links"
    void onCmdRiClicked();       // Slot für das Kommando "Weiche nach Rechts"
    void onErrorQuitClicked();   // Slot für das Quittieren von Fehlern

private:
    Ui::MainWindow *ui;

    void updateState(const QString &state); // Aktualisiert den Zustand der Weiche
    void animateSwitchPosition(int position); // Animiert die Bewegung der Weiche
};

#endif // MAINWINDOW_H
