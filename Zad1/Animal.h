#ifndef RTTI_ANIMAL_H
#define RTTI_ANIMAL_H

class Animal {

public:
    virtual void whatAnimal() = 0;
    Animal() = default;
    ~Animal() = default;
};


#endif //RTTI_ANIMAL_H
