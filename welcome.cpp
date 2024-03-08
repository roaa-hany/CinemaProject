#include "welcome.h"
#include "ui_welcome.h"
#include "loginwindow.h"

Welcome::Welcome(QWidget *parent, QString name, int age)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    QString str = QString::number (age);
    ui -> label_hello -> setText("hello " + name+ " " + str );
    QPixmap pix (":/Images/Screenshot 2024-03-03 014239.png");
    int w = ui -> label_image -> width();
    int h = ui -> label_image -> height();
    ui -> label_image ->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_logout_clicked()
{
    hide();
    LoginWindow* lw = new LoginWindow(this);
    lw -> show();
}

