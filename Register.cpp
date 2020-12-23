//
// Created by Chiara on 21/09/2020.
//

#include "Register.h"

void Register::printAllChats(const User& user) {
    auto Chats = user.getChats();
    for(auto chat : Chats) {
        for(int j = 0; j < chat.second->getMessages().size(); j++)
        chat.second->readMessage(j);
    }
}
