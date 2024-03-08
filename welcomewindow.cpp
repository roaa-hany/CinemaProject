#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    // QString a = QString :: number(age);
    // ui -> label_hello -> setText("hello " + username + " " + a);
    // QPixmap pix ("D:\Personal\Backgrounds\wallpaperflare.com_wallpaper (5).jpg");
    // int w = ui ->label_img->width();
    // int h = ui->label_img->height();
    // ui ->label_img-> setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_clicked()
{
    hide();
    LoginWindow* loginWindow = new LoginWindow(this);
    loginWindow -> show();
}

