#ifndef RTTI_COACH_H
#define RTTI_COACH_H


class Coach {
public:

    //funkcja implementowana w klasach potomnych
    //wyswietla na ekran polecenia charakterystyczne dla danego trenera
    virtual void getDailyTraining()=0;
    Coach() = default;
    ~Coach() = default;
};


#endif //RTTI_COACH_H
