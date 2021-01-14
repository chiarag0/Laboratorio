//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_CHAT_H
#define LABPROGRAMMAZIONE_CHAT_H

#include <list>
#include <string>
#include <vector>
#include <memory>
#include "Subject.h"
#include "Observer.h"
#include "Message.h"
#include "User.h"

class User;

class Chat : public Subject {
public:
    Chat(std::string fName, std::string sName) : firstName(fName), secondName(sName) {}

    virtual ~Chat();

    const std::string &getSecondName() const;

    void setSecondName(const std::string &secondName);

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    void addMessage(Message& m);

    void readMessage(int i);

    const Message& getLastMessage() const;

    const std::vector<Message> &getMessages() const;

    void addObserver(Observer* o) override ;
    void removeObserver(Observer* o) override;
    void notify() override;

private:
    std::list<Observer*> observers;
    std::string firstName, secondName;
    std::vector<Message> messages;
};



#endif //LABPROGRAMMAZIONE_CHAT_H
