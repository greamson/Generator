#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "elfs.h"
#include "clowns.h"
#include "cats.h"

class Factory {
 public:
  virtual Elf *CreateElf() const = 0;
  virtual Clown *CreateClown() const = 0;
  virtual Cat *CreateCat() const = 0;
};


class Factory_Thief : public Factory {
 public:
  Elf *CreateElf() const override {
    return new Elf_Thief();
  }
  Clown *CreateClown() const override {
    return new Clown_Thief();
  }
  Cat *CreateCat() const override {
    return new Cat_Thief();
  }
};

class Factory_Mage : public Factory {
 public:
  Elf *CreateElf() const override {
    return new Elf_Mage();
  }
  Clown *CreateClown() const override {
    return new Clown_Mage();
  }
  Cat *CreateCat() const override {
    return new Cat_Mage();
  }
};

class Factory_Warrior : public Factory {
 public:
  Elf *CreateElf() const override {
    return new Elf_Warrior();
  }
  Clown *CreateClown() const override {
    return new Clown_Warrior();
  }
  Cat *CreateCat() const override {
    return new Cat_Warrior();
  }
};


#endif // ABSTRACTFACTORY_H
