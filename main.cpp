#ifdef USE_QT5
#include <QtWidgets/QApplication>
#else
#include <QtGui/QApplication>
#endif
#include "mainwindow.h"
#include "time.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qsrand(time(NULL));
    setbuf(stdout,NULL);
    w.show();
    w.autoStart();

    return a.exec();
}
