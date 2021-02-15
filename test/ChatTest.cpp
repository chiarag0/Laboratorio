//
// Created by Chiara on 23/09/2020.
//

#include "gtest/gtest.h"
#include "../Chat.h"

User user1("Marco");
User user2("Luca");
Message m1("Marco", "Luca", "Hey!");
Message m2("Luca","Marco","Ciao!");
Chat c ("Marco", "Luca");

TEST(ChatTest, GetterSetter) {
    ASSERT_EQ(c.getFirstName(), "Marco");
    c.setFirstName("Lorenzo");
    ASSERT_EQ(c.getFirstName(), "Lorenzo");
    ASSERT_EQ(c.getSecondName(), "Luca");
    c.setSecondName("Edoardo");
    ASSERT_EQ(c.getSecondName(), "Edoardo");
    c.addMessage(m1);
    c.addMessage(m2);
    c.getUnread();
}

TEST(ChatTest, Exceptions) {
    try {
        c.readMessage(4);
    }
    catch (std::out_of_range const& e) {
        ASSERT_EQ(e.what(), 'Out of range');
    }
    catch (...) {
        FAIL();
    }
}
