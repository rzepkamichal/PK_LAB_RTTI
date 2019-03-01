#ifndef RTTI_DOG_H
#define RTTI_DOG_H

#include <iostream>
#include "Animal.h"


class Dog : public Animal {

public:
    void whatAnimal() override;
};


#endif //RTTI_DOG_H
