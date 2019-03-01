#include <iostream>
#include "Coach.h"
#include "BaseballCoach.h"
#include "GymCoach.h"
#include "SwimmingCoach.h"

using namespace std;

//wyliczenie reprezentujace kolejne dni tygodnia pczawszy od poniedzialku
enum DayOfWeek{M,T,W,F,SA,SU};

void performTraining(Coach *coach){
    coach->getDailyTraining();
}

//na rzecz obiektu polimorficznego coach i w zaleznosci od wartosci day
//wywoluje funkcje przypisana do danego dnia lub funkcje getDailyTraining,
//jezeli do danego dnia nie ma przypisanej funkcji
void performDailyTraining(Coach* coach, DayOfWeek day){

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

    //stworzenie trzech roznych obiektow dla polimorficznej klasy Coach
    Coach* baseballC = new BaseballCoach();
    Coach* gymC = new GymCoach();
    Coach* swimmC = new SwimmingCoach();

    //testy funkcji performTraining
    cout << "perform training:" << endl;
    performTraining(baseballC);
    performTraining(gymC);
    performTraining(swimmC);
    cout << endl;

    //testy funkcji performDailyTraining
    cout << "perform daily training:" << endl;
    performDailyTraining(baseballC, M);
    performDailyTraining(baseballC, SA);
    performDailyTraining(gymC, W);
    performDailyTraining(gymC, SU);
    performDailyTraining(swimmC, F);
    performDailyTraining(swimmC, W);

    return 0;
}