//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_OBSERVER_H
#define LABPROGRAMMAZIONE_OBSERVER_H


class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() {}
};


#endif //LABPROGRAMMAZIONE_OBSERVER_H
