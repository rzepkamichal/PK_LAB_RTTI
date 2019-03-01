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

    //wstawia losowo wybrany nowy obiekt Cat albo Dog do wektora animals
    //jezeli poszczegolny, nowo wygenerowany obiekt jest typu Cat, to zostaje on skopiowany do wektora Cat
    void insertRandomAnimal();

    //wstawia okreslona przez arg. number liczbe losowych obiektow do wektora animals
    void insertRandomAnimals(int number);

    //zwraca przez referencje wektor cats
    std::vector<Cat*>& getCats();
    ~RandomAnimals();

};


#endif //RTTI_RANDOMANIMALS_H
