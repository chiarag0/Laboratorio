//
// Created by Chiara on 21/09/2020.
//

#include "User.h"

void User::newChat(const User &user) {
    std::shared_ptr<Chat> c = std::make_shared<Chat>(Chat(this->getName(), user.getName()));
    chats.insert(std::make_pair(user.getName(), c));
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    this->name = name;
}

std::shared_ptr<Chat> User::getChat(std::string c) {
    return this->chats.at(c);
}

void User::removeChat(const User &user) {
    auto itr = chats.find(user.getName());
    chats.erase(itr);
}

User::~User() {

}

