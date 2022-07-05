#ifndef CATS_H
#define CATS_H
#include "character.h"

class Cat : public Character{
public:
    Cat();

    virtual ~Cat(){};
    void ClothesColor(int i) override
    {}
    void WeaponColor(int i) override
    {}

    void BodyColor(int i) override;
    void FaceType(int i) override;
    void FaceColor(int i) override;
    void HairType(int i) override;
    void HairColor(int i) override;
};



class Cat_Thief : public Cat {
public:
    Cat_Thief();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;
};

class Cat_Mage : public Cat {
public:
    Cat_Mage();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};

class Cat_Warrior : public Cat {
public:
    Cat_Warrior();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};

#endif // CATS_H
