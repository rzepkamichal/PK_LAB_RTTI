#include "RandomAnimals.h"

void RandomAnimals::insertRandomAnimal() {

    switch(rand()%2){
        case 0:
            this->animals.push_back(new Cat);
            break;
        case 1:
            this->animals.push_back(new Dog);
            break;
        default:
            break;
    }

}

void RandomAnimals::insertRandomAnimals(int number) {
    for(int i = 0; i < number; i++) {
        insertRandomAnimal();
        if(typeid(Cat) == typeid(*(this->animals[this->animals.size()-1])))
            this->cats.push_back((Cat*)this->animals[this->animals.size()-1]);
    }

}

std::vector<Cat *> &RandomAnimals::getCats() {
    return this->cats;
}

RandomAnimals::~RandomAnimals() {

    for(int i = 0; i < animals.size(); i++){
        delete animals[i];
    }

    this->animals.clear();
    this->cats.clear();
}


