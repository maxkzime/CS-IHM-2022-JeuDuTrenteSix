#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("CS IHM 2022");

    setGeometry(200,200,180,100); // ERROR ON MAC : window can't be less than 114px

    connect(ui->pbPlay, &QPushButton::clicked, this, &Widget::play);

}


void Widget::play()
{
    ui->LCDNDraw->display(itsGame->addNumber());

    if(itsGame->equalsThirtySix())
    {
        QMessageBox msgBox;
        msgBox.setText("Vous avez gagné");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else
        ui->LCDNSum->display(itsGame->getSum());

}


Widget::~Widget()
{
    delete ui;
    delete itsGame;
}
