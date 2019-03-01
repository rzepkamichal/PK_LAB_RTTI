#ifndef RTTI_GYMCOACH_H
#define RTTI_GYMCOACH_H

#include <iostream>
#include "Coach.h"

class GymCoach : public Coach {
public:
    void getDailyTraining() override;
    void getSundayTraining();
};


#endif //RTTI_GYMCOACH_H
