 #include "type_it.h"
#include "ui_type_it.h"
#include <QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include "about_me.h"
#include "result.h"
#include <QTime>
#include <QtCore>



Type_It::Type_It(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Type_It)
{
    ui->setupUi(this);
}

Type_It::~Type_It()
{
    delete ui;
}

void Type_It::on_upload_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                ""
                "(*.*)"
                ) ;
    QFile inputFile(filename);
    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);
    ui->textBrowser->setText(in.readAll());
    inputFile.close();
}



int Type_It::checkErrors()
{
    int error=0,i,j;
        QString main=ui->textBrowser->toPlainText();
        QString sub=ui->textEdit->toPlainText();
        QStringList main_list = main.split(' ',QString::SkipEmptyParts);
        QStringList sub_list = sub.split(' ',QString::SkipEmptyParts);
        for(i=0,j=0;j<sub_list.length();)
        {
            if(main_list[i]!=sub_list[j])
            {
                error++;
            }
            i++;
            j++;
        }

        return error;
}

void Type_It::on_aboutMe_clicked()
{
    About_Me mDialog;
    mDialog.setModal(true);
    mDialog.exec();
}

void Type_It::on_getRandom_clicked()
{
         QFile inputFile(":/sample.txt");
         inputFile.open(QIODevice::ReadOnly);
         QTextStream in(&inputFile);
         ui->textBrowser->setText(in.readAll());
         inputFile.close();
}

QTime myTimer;


void Type_It::on_start_clicked()
{
    myTimer.start();
    ui->start->setText("STARTED");
}

void Type_It::on_giveUp_clicked()
{
    ui->giveUp->setText("STOP");
    ui->start->setText("START");
    int time = myTimer.elapsed();
    time = time/1000;
    int errors = checkErrors();
    QString text = ui->textEdit->toPlainText();
    QStringList text_list = text.split(" ", QString::SkipEmptyParts);
    int count = text_list.count();
    float speed = (count-errors)*1.0/time ;
    Result mDialog(time,count,speed,errors);
    mDialog.setModal(true);
    mDialog.exec();
}

