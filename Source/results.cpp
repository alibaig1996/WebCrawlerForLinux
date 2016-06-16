#include "results.h"
#include "ui_results.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Results::Results(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);

    QPixmap pix3("/home/baigoo365/Downloads/IMG_5498.png");
    ui->label->setPixmap(pix3);

    QFile file("//home//baigoo365//Proj_2//index.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}

Results::~Results()
{
    delete ui;
}

void Results::on_pushButton_clicked()
{
    exit(0);
}
