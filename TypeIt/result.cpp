#include "result.h"
#include "ui_result.h"
#include "type_it.h"


Result::Result(int x,int y,float z,int e,QWidget *parent) :

    QDialog(parent),
    ui(new Ui::Result)
{    m=x;
     k=y;
     w=z*60;
     d=e;
    ui->setupUi(this);
     ui->textBrowser->setText("SPEED :"+QString::number(w)+" words/min"+"\n\nTOTAL WORD COUNT : "+ QString::number(k) +"\n\nERROR COUNT : "+ QString::number(d)+"\n\n"+"TIME TAKEN : "+ QString::number(m)+" sec");

}

Result::~Result()
{
    delete ui;
}


void Result::on_pushButton_3_clicked()
{
    qApp->quit();
}
