#ifndef ELFS_H
#define ELFS_H
#include "character.h"


class Elf : public Character{
public:
    Elf();

    virtual ~Elf(){};
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



class Elf_Thief : public Elf {
public:
    Elf_Thief();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;
};

class Elf_Mage : public Elf {
public:
    Elf_Mage();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};

class Elf_Warrior : public Elf {
public:
    Elf_Warrior();
    void ClothesColor(int i) override;
    void WeaponColor(int i) override;

};


#endif // ELFS_H
