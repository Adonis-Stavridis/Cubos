#include <QApplication>

#include <mainwindow.h>
#include <app.h>

Cubos::App cubosApp;

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
