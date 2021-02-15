//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_USER_H
#define LABPROGRAMMAZIONE_USER_H

#include <iostream>
#include <map>
#include <memory>
#include "Chat.h"

class Chat;

class User {
public:
    User(std::string n) : name(n) {}

    const std::string &getName() const;

    void setName(const std::string &name);

    void newChat(const User& user);

    void removeChat(const User& user);

    std::shared_ptr<Chat> getChat(std::string c);

    auto getChats() const {
        return chats;
    }

    virtual ~User();

private:
    std::map<std::string, std::shared_ptr<Chat> > chats;
    std::string name;
};


#endif //LABPROGRAMMAZIONE_USER_H
