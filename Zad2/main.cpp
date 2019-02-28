#include <iostream>
#include "Artist.h"
#include "Musician.h"
#include "Pianist.h"
#include "Coach.h"
#include "BaseballCoach.h"
#include "GymCoach.h"
#include "SwimmingCoach.h"

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