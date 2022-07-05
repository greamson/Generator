#include "clowns.h"

Clown::Clown()
{
    body->load(":/pics/clowns/body/color1.png");
    hair->load(":/pics/clowns/hair/1/color1.png");
    face->load(":/pics/clowns/faces/1/color1.png");
    _body = 1;
    _hair = 1;
    _hair_color = 1;
    _face = 1;
    _eyes = 1;
    clothes->load(":/pics/bg.png");
    weapon->load(":/pics/bg.png");
}

void Clown::BodyColor(int i)
{
    _body = i;
    QString tmp(":/pics/clowns/body/color");
    tmp += QString::number(_body) + ".png";
    body->load(tmp);
}

void Clown::FaceType(int i)
{
    _face = i;
    QString tmp(":/pics/clowns/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);
}

void Clown::FaceColor(int i)
{
    _eyes = i;
    QString tmp(":/pics/clowns/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);
}

void Clown::HairType(int i)
{
    _hair = i;
    QString tmp(":/pics/clowns/hair/");
    tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
    hair->load(tmp);
}

void Clown::HairColor(int i)
{
    _hair_color = i;
    QString tmp(":/pics/clowns/hair/");
    tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
    hair->load(tmp);
}

Clown_Thief::Clown_Thief()
{
    clothes->load(":/pics/clowns/clothes/1/color1.png");
    weapon->load(":/pics/clowns/weapon/dagger/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Clown_Thief::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/clowns/clothes/1/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Clown_Thief::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/clowns/weapon/dagger/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}

Clown_Mage::Clown_Mage()
{
    clothes->load(":/pics/clowns/clothes/2/color1.png");
    weapon->load(":/pics/clowns/weapon/staff/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Clown_Mage::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/clowns/clothes/2/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Clown_Mage::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/clowns/weapon/staff/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}


Clown_Warrior::Clown_Warrior()
{
    clothes->load(":/pics/clowns/clothes/3/color1.png");
    weapon->load(":/pics/clowns/weapon/sword/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Clown_Warrior::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/clowns/clothes/3/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Clown_Warrior::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/clowns/weapon/sword/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}
