#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    character = new Elf();
    ui->label_character->setPixmap(character->GetPixmap());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_exit_clicked()
{
    exit(0);
}


void MainWindow::on_pushButton_rase_next_clicked()
{
    delete character;
    switch(_rase)
    {
    case ELF:
        _rase = CAT;
        ui->textEdit_rase->setText("Кот");
        character = new Cat();
        break;
    case CAT:
        _rase = CLOWN;
        ui->textEdit_rase->setText("Шарнирный клоун");
        character = new Clown();
        break;
    case CLOWN:
        _rase = ELF;
        ui->textEdit_rase->setText("Эльф");
        character = new Elf();
        break;
    }
    ui->textEdit_rase->setAlignment(Qt::AlignCenter);
    ui->label_character->setPixmap(character->GetPixmap());

}


void MainWindow::on_pushButton_class_next_clicked()
{
    int face, body, hair, hair_color, eyes;
    face = character->GetFaceType();
    eyes = character->GetEyesColor();
    body = character->GetBodyColor();
    hair = character->GetHairType();
    hair_color = character->GetHairColor();
    delete character;
    switch(_class)
    {
    case MAGE:
        _class = THIEF;
        ui->textEdit_class->setText("Вор");
        break;
    case THIEF:
        _class = WARRIOR;
        ui->textEdit_class->setText("Воин");
        break;
    case WARRIOR:
        _class = MAGE;
        ui->textEdit_class->setText("Маг");
        break;
    }

    switch(_rase)
    {
    case ELF:
        character = factories[_class]->CreateElf();
        break;
    case CAT:
        character = factories[_class]->CreateCat();
        break;
    case CLOWN:
        character = factories[_class]->CreateClown();
        break;
    }
    character->BodyColor(body);
    character->FaceType(face);
    character->FaceColor(eyes);
    character->HairType(hair);
    character->HairColor(hair_color);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->textEdit_class->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_pushButton_rase_prev_clicked()
{
    delete character;
    switch(_rase)
    {
    case ELF:
        _rase = CLOWN;
        ui->textEdit_rase->setText("Шаринирный клоун");
        character = new Clown();
        break;
    case CLOWN:
        _rase = CAT;
        ui->textEdit_rase->setText("Кот");
        character = new Cat();
        break;
    case CAT:
        _rase = ELF;
        ui->textEdit_rase->setText("Эльф");
        character = new Elf();
        break;
    }
    ui->label_character->setPixmap(character->GetPixmap());
    ui->textEdit_rase->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_pushButton_class_prev_clicked()
{
    int face, body, hair, hair_color, eyes;
    face = character->GetFaceType();
    eyes = character->GetEyesColor();
    body = character->GetBodyColor();
    hair = character->GetHairType();
    hair_color = character->GetHairColor();
    delete character;
    switch(_class)
    {
    case MAGE:
        _class = WARRIOR;
        ui->textEdit_class->setText("Воин");
        break;
    case WARRIOR:
        _class = THIEF;
        ui->textEdit_class->setText("Вор");
        break;
    case THIEF:
        _class = MAGE;
        ui->textEdit_class->setText("Маг");
        break;
    }

    switch(_rase)
    {
    case ELF:
        character = factories[_class]->CreateElf();
        break;
    case CAT:
        character = factories[_class]->CreateCat();
        break;
    case CLOWN:
        character = factories[_class]->CreateClown();
        break;
    }
    character->BodyColor(body);
    character->FaceType(face);
    character->FaceColor(eyes);
    character->HairType(hair);
    character->HairColor(hair_color);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->textEdit_class->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_pushButton_clothes_color_1_clicked()
{
    character->ClothesColor(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_clothes_color_1->setStyleSheet("color:red;");
    ui->pushButton_clothes_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_clothes_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_clothes_color_2_clicked()
{
    character->ClothesColor(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_clothes_color_2->setStyleSheet("color:red;");
    ui->pushButton_clothes_color_1->setStyleSheet("color:yellow;");
    ui->pushButton_clothes_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_clothes_color_3_clicked()
{
    character->ClothesColor(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_clothes_color_3->setStyleSheet("color:red;");
    ui->pushButton_clothes_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_clothes_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_body_color_1_clicked()
{
    character->BodyColor(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_body_color_1->setStyleSheet("color:red;");
    ui->pushButton_body_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_body_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_body_color_2_clicked()
{
    character->BodyColor(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_body_color_2->setStyleSheet("color:red;");
    ui->pushButton_body_color_3->setStyleSheet("color:yellow;");
    ui->pushButton_body_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_body_color_3_clicked()
{
    character->BodyColor(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_body_color_3->setStyleSheet("color:red;");
    ui->pushButton_body_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_body_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_color_1_clicked()
{
    character->FaceColor(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_color_1->setStyleSheet("color:red;");
    ui->pushButton_face_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_face_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_color_2_clicked()
{
    character->FaceColor(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_color_2->setStyleSheet("color:red;");
    ui->pushButton_face_color_1->setStyleSheet("color:yellow;");
    ui->pushButton_face_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_color_3_clicked()
{
    character->FaceColor(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_color_3->setStyleSheet("color:red;");
    ui->pushButton_face_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_face_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_1_clicked()
{
    character->FaceType(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_1->setStyleSheet("color:red;");
    ui->pushButton_face_2->setStyleSheet("color:yellow;");
    ui->pushButton_face_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_2_clicked()
{
    character->FaceType(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_2->setStyleSheet("color:red;");
    ui->pushButton_face_1->setStyleSheet("color:yellow;");
    ui->pushButton_face_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_face_3_clicked()
{
    character->FaceType(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_face_3->setStyleSheet("color:red;");
    ui->pushButton_face_2->setStyleSheet("color:yellow;");
    ui->pushButton_face_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_type_1_clicked()
{
    character->HairType(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_type_1->setStyleSheet("color:red;");
    ui->pushButton_hair_type_2->setStyleSheet("color:yellow;");
    ui->pushButton_hair_type_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_type_2_clicked()
{
    character->HairType(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_type_2->setStyleSheet("color:red;");
    ui->pushButton_hair_type_1->setStyleSheet("color:yellow;");
    ui->pushButton_hair_type_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_type_3_clicked()
{
    character->HairType(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_type_3->setStyleSheet("color:red;");
    ui->pushButton_hair_type_2->setStyleSheet("color:yellow;");
    ui->pushButton_hair_type_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_color_1_clicked()
{
    character->HairColor(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_color_1->setStyleSheet("color:red;");
    ui->pushButton_hair_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_hair_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_color_2_clicked()
{
    character->HairColor(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_color_2->setStyleSheet("color:red;");
    ui->pushButton_hair_color_1->setStyleSheet("color:yellow;");
    ui->pushButton_hair_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_hair_color_3_clicked()
{
    character->HairColor(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_hair_color_3->setStyleSheet("color:red;");
    ui->pushButton_hair_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_hair_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_weapon_color_1_clicked()
{
    character->WeaponColor(1);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_weapon_color_1->setStyleSheet("color:red;");
    ui->pushButton_weapon_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_weapon_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_weapon_color_2_clicked()
{
    character->WeaponColor(2);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_weapon_color_2->setStyleSheet("color:red;");
    ui->pushButton_weapon_color_1->setStyleSheet("color:yellow;");
    ui->pushButton_weapon_color_3->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_weapon_color_3_clicked()
{
    character->WeaponColor(3);
    ui->label_character->setPixmap(character->GetPixmap());
    ui->pushButton_weapon_color_3->setStyleSheet("color:red;");
    ui->pushButton_weapon_color_2->setStyleSheet("color:yellow;");
    ui->pushButton_weapon_color_1->setStyleSheet("color:yellow;");
}


void MainWindow::on_pushButton_finish_clicked()
{
    Dialog* dialog = new Dialog;
    dialog->SetPixmap(character->GetPixmap());
    dialog->exec();
}


void MainWindow::on_textEdit_name_textChanged()
{
    //ui->textEdit_name->setAlignment(Qt::AlignCenter);
}

