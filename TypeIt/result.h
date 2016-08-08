#ifndef RESULT_H
#define RESULT_H

#include <QDialog>

namespace Ui {
class Result;
}

class Result : public QDialog
{
    Q_OBJECT

public:
     int k,m,d;
     float w;
    explicit Result(int x,int y, float z,int e,QWidget *parent = 0);
    ~Result();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();


private:
    Ui::Result *ui;
};

#endif // RESULT_H
