#ifndef CHARACTER_H
#define CHARACTER_H

#include <QDebug>
#include <QPixmap>
#include <QPainter>

enum Rases
{
    ELF,
    CAT,
    CLOWN
};

enum Classes
{
    MAGE,
    THIEF,
    WARRIOR
};



class Character {
public:
    virtual ~Character(){};
    Character()
    {
        body = new QPixmap(525, 700);
        face = new QPixmap(525, 700);
        hair = new QPixmap(525, 700);
        clothes = new QPixmap(525, 700);
        weapon = new QPixmap(525, 700);
    }
    QPixmap GetPixmap()
    {
        QPixmap main(":/pics/bg.png");
        QPainter painter(&main);

        painter.drawPixmap(0, 0, *body);
        painter.drawPixmap(0, 0, *hair);
        painter.drawPixmap(0, 0, *face);
        painter.drawPixmap(0, 0, *clothes);
        painter.drawPixmap(0, 0, *weapon);
        painter.end();
        return main;
    }
    virtual void BodyColor(int i) = 0;
    virtual void FaceType(int i) = 0;
    virtual void FaceColor(int i) = 0;
    virtual void HairType(int i) = 0;
    virtual void HairColor(int i) = 0;
    virtual void ClothesColor(int i) = 0;
    virtual void WeaponColor(int i) = 0;

    int GetBodyColor() {return _body;}
    int GetEyesColor() {return _eyes;}
    int GetFaceType() {return _face;}
    int GetHairType() {return _hair;}
    int GetHairColor() {return _hair_color;}
    int GetWeaponColor() {return _weapon_color;}
    int GetClothesColor() {return _clothes_color;}
protected:
    QPixmap* body = nullptr;
    QPixmap* face = nullptr;
    QPixmap* hair = nullptr;
    QPixmap* clothes = nullptr;
    QPixmap* weapon = nullptr;
    int _face, _eyes, _body, _hair, _hair_color, _weapon_color, _clothes_color;
};

#endif // CHARACTER_H
