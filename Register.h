//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_REGISTER_H
#define LABPROGRAMMAZIONE_REGISTER_H

#include <iostream>
#include <list>
#include <map>
#include "Chat.h"
#include "User.h"

class Register {
public:
    Register(){}

    virtual ~Register() {}

    void printAllChats(const User& user);

private:
    std::map<std::string, Chat*> chats;
};


#endif //LABPROGRAMMAZIONE_REGISTER_H
