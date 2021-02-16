#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopServices>
#include <QFileDialog>
#include <QString>
#include <QTextStream>

#include <filehandler.h>

QT_BEGIN_NAMESPACE
namespace Ui
{
  class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
  Ui::MainWindow *_ui;

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  //File
  void on_actionNew_triggered();
  void on_actionOpen_triggered();
  void on_actionSave_triggered();
  void on_actionSave_As_triggered();
  void on_actionExit_triggered();
  //Edit
  void on_actionUndo_triggered();
  void on_actionRedo_triggered();
  //Tools
  void on_actionSelect_triggered();
  void on_actionTranslate_triggered();
  void on_actionRotate_triggered();
  void on_actionScale_triggered();
  void on_actionExtrude_triggered();
  void on_actionCreate_triggered();
  //Help
  void on_actionDocumentation_triggered();
  void on_actionAbout_triggered();
  // //Translate
  // void on_worldTranslationX_valueChanged(double action);
  // void on_worldTranslationY_valueChanged(double action);
  // void on_worldTranslationZ_valueChanged(double action);
  // //Rotate
  // void on_worldRotationX_valueChanged(double action);
  // void on_worldRotationY_valueChanged(double action);
  // void on_worldRotationZ_valueChanged(double action);
  // //Zoom
  // void on_worldZoom_valueChanged(double action);
  // //Focus loss
  // void on_worldTranslationX_editingFinished();
  // void on_worldTranslationY_editingFinished();
  // void on_worldTranslationZ_editingFinished();
  // void on_worldRotationX_editingFinished();
  // void on_worldRotationY_editingFinished();
  // void on_worldRotationZ_editingFinished();
  // void on_worldZoom_editingFinished();
  // //Grid
  // void on_gridCheckBox_stateChanged(int arg);
};
#endif // MAINWINDOW_H
