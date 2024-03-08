#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcome.h"
#include "registerwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui -> label_error -> setVisible ( false );
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    for (int i = 0; i<100; i++)
    {
        if (ui->lineEdit_user->text() == usernames[i])
        {
            if (ui->lineEdit_pass->text() == passwords[i])
            {
                hide();
                Welcome* ww = new Welcome (this,ui->lineEdit_user->text(), ages[i] );
                ww -> show();
            }
        }
        else
        {
            ui -> label_error -> setVisible(true);
        }
    }
}


void LoginWindow::on_pushButton_register_clicked()
{
    hide();
    RegisterWindow* rw = new RegisterWindow (this);
    rw -> show();
}

