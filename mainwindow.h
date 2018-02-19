#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QVariant>
#include <QtMultimedia/QAudioInput>
//#include "sn
//#include "android/input.h"

QT_BEGIN_NAMESPACE

class QLabel;

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class Console;
class SettingsDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

private slots:
    void on_horizontalSlider_sliderMoved(int position);
    void on_horizontalSlider_2_sliderMoved(int position);

    void on_action_Exit_triggered();

private:
    Ui::MainWindow *ui;
    uint32_t m_volume;
    uint32_t m_frequency;
};

#endif // MAINWINDOW_H
