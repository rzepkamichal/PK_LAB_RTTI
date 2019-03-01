#ifndef RTTI_GYMCOACH_H
#define RTTI_GYMCOACH_H

#include <iostream>
#include "Coach.h"

class GymCoach : public Coach {
public:
    void getDailyTraining() override;

    //wyswietla na ekran polecenie na niedziele
    void getSundayTraining();
};


#endif //RTTI_GYMCOACH_H
