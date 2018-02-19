#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "android/input.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_volume(0),
    m_frequency(440)
{
    ui->setupUi(this);
    ui->volumeLabel->setText(QString::number(0));
    ui->frequencyLabel->setText(QString::number(0));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
//    m_volume = position;
    ui->volumeLabel->setText(QVariant(position).toString());
}

void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{

//    m_frequency = position;
    ui->frequencyLabel->setText(QVariant(position).toString());
}


void MainWindow::on_action_Exit_triggered()
{
    this->close();
}
