#ifndef RTTI_RANDOMANIMALS_H
#define RTTI_RANDOMANIMALS_H

#include <vector>
#include <typeinfo>
#include "Cat.h"
#include "Dog.h"
class RandomAnimals {
private:
    std::vector<Animal*> animals;
    std::vector<Cat*> cats;

public:

    RandomAnimals() = default;
    void insertRandomAnimal();
    void insertRandomAnimals(int number);
    void updateCats();
    std::vector<Cat*>& getCats();
    ~RandomAnimals();

};


#endif //RTTI_RANDOMANIMALS_H
