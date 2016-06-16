#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "results.h"
#include "user.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/baigoo365/Downloads/IMG_5497.png");
    QPixmap pix2("/home/baigoo365/Downloads/IMG_5498.png");
    ui->label_pic->setPixmap(pix);
    ui->label_jalebi->setPixmap(pix2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Quit_clicked()
{
    exit(0);
}

void MainWindow::on_lineEdit_returnPressed()
{
    this->on_Search_clicked();
}

void MainWindow::on_Search_clicked()
{
    remove("/home/baigoo365/Proj_2/index.txt");
    session sess("http://www.boost.org/");
    sess.stringsearch(s);
    Results results;
    results.setModal(true);
    results.exec();
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    s = arg1.toStdString();
}
