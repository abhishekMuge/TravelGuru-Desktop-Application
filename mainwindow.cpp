#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registerdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionRegister->setShortcut(QKeySequence("ctrl+r"));
    connect(ui->actionRegister, &QAction::triggered, this, &MainWindow::openRegisterDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openLoginDialog()
{
    return;
}

void MainWindow::openRegisterDialog()
{
    RegisterDialog *registerDialog = new RegisterDialog();
    registerDialog->setWindowTitle("Register");
    registerDialog->setFixedSize(registerDialog->size());
    connect(registerDialog, &RegisterDialog::finished, registerDialog, &RegisterDialog::deleteLater);
    registerDialog->exec();
}
