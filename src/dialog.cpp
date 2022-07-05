#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::SetPixmap(QPixmap pixmap)
{
    ui->label->setPixmap(pixmap);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                QString::fromUtf8("Сохранить файл"),
                                QDir::currentPath(),
                                "Images (*.png *.xpm *.jpg);;All files (*.*)");
    ui->label->pixmap()->save(fileName);
}

