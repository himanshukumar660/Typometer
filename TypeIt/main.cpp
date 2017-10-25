#include "type_it.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    Type_It w;
    w.setStyleSheet("background-image:url(://CSS-Background-Images-1-Red-and-Yellow.jpg)");
    w.show();
    
    return a.exec();
}
