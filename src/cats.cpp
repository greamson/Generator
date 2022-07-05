#include "cats.h"


Cat::Cat()
{
    body->load(":/pics/cats/body/color1.png");
    hair->load(":/pics/cats/hair/1/color1.png");
    face->load(":/pics/cats/faces/1/color1.png");
    _body = 1;
    _hair = 1;
    _hair_color = 1;
    _face = 1;
    _eyes = 1;
    clothes->load(":/pics/bg.png");
    weapon->load(":/pics/bg.png");
}

void Cat::BodyColor(int i)
{
    _body = i;
    QString tmp(":/pics/cats/body/color");
    tmp += QString::number(_body) + ".png";
    body->load(tmp);
}

void Cat::FaceType(int i)
{
    _face = i;
    QString tmp(":/pics/cats/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);
}

void Cat::FaceColor(int i)
{
    _eyes = i;
    QString tmp(":/pics/cats/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);
}

void Cat::HairType(int i)
{
    _hair = i;
    QString tmp(":/pics/cats/hair/");
    tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
    hair->load(tmp);
}

void Cat::HairColor(int i)
{
    _hair_color = i;
    QString tmp(":/pics/cats/hair/");
    tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
    hair->load(tmp);
}

Cat_Thief::Cat_Thief()
{
    clothes->load(":/pics/cats/clothes/1/color1.png");
    weapon->load(":/pics/cats/weapon/dagger/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Cat_Thief::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/cats/clothes/1/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Cat_Thief::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/cats/weapon/dagger/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}

Cat_Mage::Cat_Mage()
{
    clothes->load(":/pics/cats/clothes/2/color1.png");
    weapon->load(":/pics/cats/weapon/staff/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Cat_Mage::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/cats/clothes/2/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Cat_Mage::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/cats/weapon/staff/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}


Cat_Warrior::Cat_Warrior()
{
    clothes->load(":/pics/cats/clothes/3/color1.png");
    weapon->load(":/pics/cats/weapon/sword/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Cat_Warrior::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/cats/clothes/3/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Cat_Warrior::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/cats/weapon/sword/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}
