#include "type_it.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    Type_It w;
    w.show();
    
    return a.exec();
}
