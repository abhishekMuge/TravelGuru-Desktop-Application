/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QLabel *label_name;
    QLabel *username_label;
    QLineEdit *lineEdit_2;
    QLabel *password_label;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(371, 366);
        RegisterDialog->setMouseTracking(true);
        label_name = new QLabel(RegisterDialog);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(11, 11, 63, 20));
        username_label = new QLabel(RegisterDialog);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(10, 80, 71, 20));
        lineEdit_2 = new QLineEdit(RegisterDialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 110, 341, 26));
        password_label = new QLabel(RegisterDialog);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(10, 150, 63, 20));
        lineEdit_3 = new QLineEdit(RegisterDialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(11, 412, 150, 26));
        lineEdit = new QLineEdit(RegisterDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 341, 26));
        lineEdit_4 = new QLineEdit(RegisterDialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 180, 341, 26));
        lineEdit_4->setEchoMode(QLineEdit::EchoMode::Password);
        label_4 = new QLabel(RegisterDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 220, 63, 20));
        pushButton = new QPushButton(RegisterDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 310, 93, 29));
        comboBox = new QComboBox(RegisterDialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 250, 341, 26));

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("RegisterDialog", "Name", nullptr));
        username_label->setText(QCoreApplication::translate("RegisterDialog", "UserName", nullptr));
        password_label->setText(QCoreApplication::translate("RegisterDialog", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDialog", "Country", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterDialog", "Create User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
