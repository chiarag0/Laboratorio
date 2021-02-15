//
// Created by Chiara on 21/09/2020.
//

#include "Notifier.h"

void Notifier::update() {
    this->display(chat->getLastMessage());
}

void Notifier::display(const Message& message) {
    std::cout << "NEW MESSAGE IN CHAT BETWEEN " << message.getSender() << " AND " <<  message.getReceiver() << " !! " << std::endl;
    std::cout << "Sent by: " << message.getSender() << " to " << message.getReceiver() << std::endl;
    std::cout << "Content: " << message.getText() << std::endl;
}
