#ifndef CLOWNS_H
#define CLOWNS_H
#include "character.h"

class Clown : public Character{
public:
    Clown();

    virtual ~Clown(){};
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



class Clown_Thief : public Clown {
public:
    Clown_Thief();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;
};

class Clown_Mage : public Clown {
public:
    Clown_Mage();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};

class Clown_Warrior : public Clown {
public:
    Clown_Warrior();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};

#endif // CLOWNS_H
