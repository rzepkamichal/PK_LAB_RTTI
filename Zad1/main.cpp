#include <iostream>
#include <vector>
#include <typeinfo>
#include <ctime>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "RandomAnimals.h"

using namespace std;
enum DayOfWeek{M,T,W,F,SA,SU};

void performTraining(Coach *coach){
    coach->getDailyTraining();
}

void performDailyTraining(Coach *coach, DayOfWeek day){

    if(day == SU && dynamic_cast<GymCoach*>(coach)){
        GymCoach* gymC = dynamic_cast<GymCoach*>(coach);
        gymC->getSundayTraining();
    }else if(day == SA && dynamic_cast<BaseballCoach*>(coach)){
        BaseballCoach* baseballC = dynamic_cast<BaseballCoach*>(coach);
        baseballC->getSaturdayTraining();
    }else if(day == W && dynamic_cast<SwimmingCoach*>(coach)){
        SwimmingCoach* swimmC = dynamic_cast<SwimmingCoach*>(coach);
        swimmC->getWednesdayTraining();
    }else{
        coach->getDailyTraining();
    }

}


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