//
// Created by Chiara on 21/09/2020.
//

#include "User.h"

Chat* User::newChat(const User &user) {
    Chat *c = new Chat(this->getName(), user.getName());
    chats.insert(std::make_pair(user.getName(), c));
    return c;
}

const std::string &User::getName() const {
    return name;
}

void User::removeChat(const User &user) {
    auto itr = chats.find(user.getName());
    chats.erase(itr);
}

User::~User() {

}
