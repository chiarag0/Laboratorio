//
// Created by Chiara on 21/09/2020.
//

#ifndef LABPROGRAMMAZIONE_MESSAGE_H
#define LABPROGRAMMAZIONE_MESSAGE_H

#include <iostream>

class Message {
public:
    Message(std::string s, std::string r, std::string t, bool rd = false) : sender(s), receiver(r), text(t), read(rd) {}

    bool isRead() const;

    void setRead(bool read);

    const std::string &getText() const;

    void setText(const std::string &text);

    const std::string &getReceiver() const;

    void setReceiver(const std::string &receiver);

    const std::string &getSender() const;

    void setSender(const std::string &sender);


private:
    std::string sender, receiver, text;
    bool read;
};


#endif //LABPROGRAMMAZIONE_MESSAGE_H
