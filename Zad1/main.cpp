#include <iostream>
#include <vector>
#include <typeinfo>
#include <ctime>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "RandomAnimals.h"

using namespace std;

int main() {

    srand(time(NULL));

    int numberOfAnimals = 20;
    RandomAnimals randomAnimals;

    randomAnimals.insertRandomAnimals(numberOfAnimals);
    std::vector<Cat*> cats = randomAnimals.getCats();

    for(int i = 0; i < cats.size(); i++){
        cats[i]->whatAnimal();
    }
    cats.clear();


    return 0;
}
