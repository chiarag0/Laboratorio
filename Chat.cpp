//
// Created by Chiara on 21/09/2020.
//

#include "Chat.h"
#include "Observer.h"

void Chat::addObserver(Observer* o) {
    observers.push_back(o);
}

void Chat::removeObserver(Observer* o) {
    observers.remove(o);
}

void Chat::notify() {
    for (auto observer: observers)
        observer->update();
}

const std::string &Chat::getFirstName() const {
    return firstName;
}

void Chat::setFirstName(const std::string &firstName) {
    this->firstName = firstName;
}

const std::string &Chat::getSecondName() const {
    return secondName;
}

void Chat::setSecondName(const std::string &secondName) {
    this->secondName = secondName;
}

void Chat::addMessage(Message &m) {
    if ((firstName==m.getSender()||firstName==m.getReceiver())&& (secondName==m.getSender()||secondName==m.getReceiver())) {
        messages.push_back(m);
        this->notify();
    }
}

void Chat::readMessage(int i) {
    if(i > 0 && i < messages.size()) {
        std::cout <<"Sender: "<< messages[i].getSender() <<", Receiver: "<< messages[i].getReceiver() << std::endl;
        std::cout <<"Text: "<< messages[i].getText() << std::endl;
        messages[i].setRead(true);
        this->notify();
    }
    else
        throw std::out_of_range("Message not found.");
}

const Message &Chat::getLastMessage() const {
    return messages.back();
}

const std::vector<Message> &Chat::getMessages() const {
    return messages;
}

Chat::~Chat() {

}


