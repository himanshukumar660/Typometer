#include "about_me.h"
#include "ui_about_me.h"

About_Me::About_Me(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_Me)
{
    ui->setupUi(this);
}

About_Me::~About_Me()
{
    delete ui;
}
