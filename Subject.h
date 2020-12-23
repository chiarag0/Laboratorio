//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_SUBJECT_H
#define LABPROGRAMMAZIONE_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual void addObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notify() = 0;

    virtual ~Subject() {}

};


#endif //LABPROGRAMMAZIONE_SUBJECT_H
