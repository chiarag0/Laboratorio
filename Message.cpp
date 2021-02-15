//
// Created by Chiara on 21/09/2020.
//

#include "Message.h"

const std::string &Message::getSender() const {
    return sender;
}

void Message::setSender(const std::string &sender) {
    Message::sender = sender;
}

const std::string &Message::getReceiver() const {
    return receiver;
}

void Message::setReceiver(const std::string &receiver) {
    Message::receiver = receiver;
}

const std::string &Message::getText() const {
    return text;
}

void Message::setText(const std::string &text) {
    Message::text = text;
}

bool Message::isRead() const {
    return read;
}

void Message::setRead(bool read) {
    Message::read = read;
}


