#include <iostream>
#include "Chat.h"
#include "User.h"
#include "Message.h"
#include "Notifier.h"

int main() {
    User user1("Marco");
    User user2("Luca");
    user1.newChat(user2);
    std::shared_ptr<Chat> chat = user1.getChat(user2.getName());
    Notifier notifier(chat);
    Message message1("Marco", "Luca", "Hello, how are you?");
    Message message2("Luca", "Marco", "Hey! It's all ok, what about you?");
    Message message3("Marco", "Luca", "I'm doing great, thank you!");
    Message message4("Irene", "Francesco", "Buongiorno!" );

    chat->addMessage(message1);

    std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

    chat->addMessage(message2);

    std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

    chat->addMessage(message3);

    std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

    try {
        chat->readMessage(7);
    }
    catch (std::out_of_range &e) {
        std::cerr << "Out of range error. This mail doesn't exist." << std::endl;
    }

    try {
        chat->addMessage(message4);
    }
    catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

}
