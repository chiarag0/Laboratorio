//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_NOTIFIER_H
#define LABPROGRAMMAZIONE_NOTIFIER_H

#include "Observer.h"
#include "Subject.h"
#include "Chat.h"

class Notifier : public Observer {
public:
    Notifier(Chat* chat) {
        chat->addObserver(this);
        this->chat = chat;
    }

    ~Notifier(){
        chat->removeObserver(this);
    }

    void update() override;
    void display(const Message& message);

private:
    Chat* chat;
};


#endif //LABPROGRAMMAZIONE_NOTIFIER_H
