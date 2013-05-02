#include <QtCore>
#include <QApplication>

#include "QGLWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	
    QGLWindow window;
    window.resize(800,800);
    window.show();

    return a.exec();
}
