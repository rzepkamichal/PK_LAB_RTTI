#ifndef RTTI_CAT_H
#define RTTI_CAT_H

#include "Animal.h"
#include <iostream>

class Cat : public Animal{

public:
    void whatAnimal() override;
};


#endif //RTTI_CAT_H
