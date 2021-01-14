//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_USER_H
#define LABPROGRAMMAZIONE_USER_H

#include <iostream>
#include <map>
#include "Chat.h"

class Chat;

class User {
public:
    User(std::string n) : name(n) {}

    const std::string &getName() const;

    void setName(const std::string &name);

    Chat* newChat(const User& user);

    void removeChat(const User& user);

    auto getChats() const {
        return chats;
    }

    virtual ~User();

private:
    std::map<std::string, Chat*> chats;
    std::string name;
};


#endif //LABPROGRAMMAZIONE_USER_H
