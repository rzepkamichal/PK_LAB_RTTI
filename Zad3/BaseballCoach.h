#ifndef RTTI_BASEBALLCOACH_H
#define RTTI_BASEBALLCOACH_H

#include <iostream>
#include "Coach.h"

class BaseballCoach : public Coach{
public:
    void getDailyTraining() override;
    void getSaturdayTraining();
};


#endif //RTTI_BASEBALLCOACH_H
