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

    //liczba wygenerowanych losowo obiektow typu Animals
    int numberOfAnimals = 20;

    RandomAnimals randomAnimals;

    //losowe generowanie obiektow Animals
    randomAnimals.insertRandomAnimals(numberOfAnimals);

    //przypisanie wektora cats
    std::vector<Cat*> cats = randomAnimals.getCats();

    //wyswietlenie lczby obiektow Cat stanowiacych wygenerowane obiekty Animals
    cout << "liczba kotow: " << cats.size() << endl;

    for(int i = 0; i < cats.size(); i++){
        cats[i]->whatAnimal();
    }

    cats.clear();


    return 0;
}
