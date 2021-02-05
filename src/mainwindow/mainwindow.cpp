#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->menuBar->setContextMenuPolicy(Qt::PreventContextMenu);
  ui->mainToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
}

MainWindow::~MainWindow()
{
  delete ui;
}

//File
void MainWindow::on_actionNew_triggered()
{
}

void MainWindow::on_actionOpen_triggered()
{
}

void MainWindow::on_actionSave_triggered()
{
}

void MainWindow::on_actionSave_As_triggered()
{
}

void MainWindow::on_actionExit_triggered()
{
  statusBar()->showMessage(tr("Exit"));
  QApplication::quit();
}

//Edit
void MainWindow::on_actionUndo_triggered()
{
  statusBar()->showMessage(tr("Undo"));
}

void MainWindow::on_actionRedo_triggered()
{
  statusBar()->showMessage(tr("Redo"));
}

//Tools
void MainWindow::on_actionSelect_triggered()
{
  statusBar()->showMessage(tr("Select Tool"));
}

void MainWindow::on_actionTranslate_triggered()
{
  statusBar()->showMessage(tr("Translate Tool"));
}

void MainWindow::on_actionRotate_triggered()
{
  statusBar()->showMessage(tr("Rotate Tool"));
}

void MainWindow::on_actionScale_triggered()
{
  statusBar()->showMessage(tr("Scale Tool"));
}

void MainWindow::on_actionExtrude_triggered()
{
  statusBar()->showMessage(tr("Extrude Tool"));
}

void MainWindow::on_actionCreate_triggered()
{
  statusBar()->showMessage(tr("Create Tool"));
}

//Help
void MainWindow::on_actionDocumentation_triggered()
{
  statusBar()->showMessage(tr("Documentation"));
  QDesktopServices::openUrl(QUrl("https://adonis-stavridis.github.io/Cubos-website/#/documentation"));
}

void MainWindow::on_actionAbout_triggered()
{
  statusBar()->showMessage(tr("About"));
  QDesktopServices::openUrl(QUrl("https://adonis-stavridis.github.io/Cubos-website/#/about"));
}

// //Translation
// void MainWindow::on_worldTranslationX_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Translation X"));
// }

// void MainWindow::on_worldTranslationY_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Translation Y"));
// }

// void MainWindow::on_worldTranslationZ_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Translation Z"));
// }

// //Rotation
// void MainWindow::on_worldRotationX_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Rotation X"));
// }

// void MainWindow::on_worldRotationY_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Rotation Y"));
// }

// void MainWindow::on_worldRotationZ_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Rotation Z"));
// }

// //Zoom
// void MainWindow::on_worldZoom_valueChanged(double action)
// {
// 	statusBar()->showMessage(tr("Scale X"));
// }

// //Focus loss
// void MainWindow::on_worldTranslationX_editingFinished()
// {
// }

// void MainWindow::on_worldTranslationY_editingFinished()
// {
// }

// void MainWindow::on_worldTranslationZ_editingFinished()
// {
// }

// void MainWindow::on_worldRotationX_editingFinished()
// {
// }

// void MainWindow::on_worldRotationY_editingFinished()
// {
// }

// void MainWindow::on_worldRotationZ_editingFinished()
// {
// }

// void MainWindow::on_worldZoom_editingFinished()
// {
// }

// //Grid
// void MainWindow::on_gridCheckBox_stateChanged(int arg)
// {
// 	if (arg == Qt::Unchecked)
// 		if (arg == Qt::Checked)
// }
