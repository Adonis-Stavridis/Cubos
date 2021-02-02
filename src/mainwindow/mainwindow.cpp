#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
		: QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	std::cout << "Hello World" << std::endl;
}

MainWindow::~MainWindow()
{
	delete ui;
}
