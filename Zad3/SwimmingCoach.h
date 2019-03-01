#ifndef RTTI_SWIMMINGCOACH_H
#define RTTI_SWIMMINGCOACH_H

#include <iostream>
#include "Coach.h"

class SwimmingCoach : public Coach {
public:
    void getDailyTraining() override;

    //wyswietla na ekran polecenie na srode
    void getWednesdayTraining();
};


#endif //RTTI_SWIMMINGCOACH_H
