#include "elfs.h"


//Elf
Elf::Elf()
{
    body->load(":/pics/elfs/body/color1.png");
    hair->load(":/pics/elfs/hair/1/color1.png");
    face->load(":/pics/elfs/faces/1/color1.png");
    _body = 1;
    _hair = 1;
    _hair_color = 1;
    _face = 1;
    _eyes = 1;
    clothes->load(":/pics/bg.png");
    weapon->load(":/pics/bg.png");
}

void Elf::BodyColor(int i)
{
    _body = i;
    QString tmp(":/pics/elfs/body/color");
    tmp += QString::number(_body) + ".png";
    body->load(tmp);
}

void Elf::FaceType(int i)
{
    _face = i;
    QString tmp(":/pics/elfs/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);
}

void Elf::FaceColor(int i)
{
    _eyes = i;
    QString tmp(":/pics/elfs/faces/");
    tmp += QString::number(_face) + "/color" + QString::number(_eyes) + ".png";
    face->load(tmp);

}

void Elf::HairType(int i)
{
   _hair = i;
   QString tmp(":/pics/elfs/hair/");
   tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
   hair->load(tmp);
}

void Elf::HairColor(int i)
{
    _hair_color = i;
    QString tmp(":/pics/elfs/hair/");
    tmp += QString::number(_hair) + "/color" + QString::number(_hair_color) +  ".png";
    hair->load(tmp);
}


//Elf_Thief
Elf_Thief::Elf_Thief()
{
    clothes->load(":/pics/elfs/clothes/1/color1.png");
    weapon->load(":/pics/elfs/weapon/dagger/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Elf_Thief::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/elfs/clothes/1/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Elf_Thief::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/elfs/weapon/dagger/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}



//Elf_Mage
Elf_Mage::Elf_Mage()
{
    clothes->load(":/pics/elfs/clothes/2/color1.png");
    weapon->load(":/pics/elfs/weapon/staff/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Elf_Mage::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/elfs/clothes/2/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Elf_Mage::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/elfs/weapon/staff/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}




//Elf_Warrior
Elf_Warrior::Elf_Warrior()
{
    clothes->load(":/pics/elfs/clothes/3/color1.png");
    weapon->load(":/pics/elfs/weapon/sword/color1.png");
    _clothes_color = 1;
    _weapon_color = 1;
}

void Elf_Warrior::ClothesColor(int i)
{
    _clothes_color = i;
    QString tmp(":/pics/elfs/clothes/3/color");
    tmp += QString::number(_clothes_color) + ".png";
    clothes->load(tmp);
}

void Elf_Warrior::WeaponColor(int i)
{
    _weapon_color = i;
    QString tmp(":/pics/elfs/weapon/sword/color");
    tmp += QString::number(_weapon_color) + ".png";
    weapon->load(tmp);
}

