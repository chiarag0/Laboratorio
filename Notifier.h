//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_NOTIFIER_H
#define LABPROGRAMMAZIONE_NOTIFIER_H

#include <memory>
#include "Observer.h"
#include "Subject.h"
#include "Chat.h"

class Notifier : public Observer {
public:
    Notifier(std::shared_ptr<Chat> chat) {
        chat->addObserver(this);
        this->chat = chat;
    }

    virtual ~Notifier(){
        chat->removeObserver(this);
    }

    void update() override;
    void display(const Message& message);

private:
    std::shared_ptr<Chat> chat;
};


#endif //LABPROGRAMMAZIONE_NOTIFIER_H
