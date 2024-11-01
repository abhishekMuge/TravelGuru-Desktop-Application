/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:

    void setupUi(QFrame *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName("LoginDlg");
        LoginDlg->resize(480, 640);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QFrame *LoginDlg)
    {
        LoginDlg->setWindowTitle(QCoreApplication::translate("LoginDlg", "Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
