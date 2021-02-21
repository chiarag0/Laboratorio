//
// Created by Chiara on 23/09/2020.
//

#include "gtest/gtest.h"
#include "../Chat.h"

User user1("Marco");
User user2("Luca");
Message m1("Marco", "Luca", "Hey!");
Message m2("Luca","Marco","Ciao!");
Message m3("Irene", "Francesco", "Buongiorno!" );
Chat c ("Marco", "Luca");


TEST(ChatTest, GetterSetter) {
    ASSERT_EQ(c.getFirstName(), "Marco");
    ASSERT_EQ(c.getSecondName(), "Luca");
    c.addMessage(m1);
    c.addMessage(m2);
    c.getUnread();
    c.setFirstName("Lorenzo");
    ASSERT_EQ(c.getFirstName(), "Lorenzo");
    c.setSecondName("Edoardo");
    ASSERT_EQ(c.getSecondName(), "Edoardo");
}

TEST(ChatTest, Exception) {
    EXPECT_THROW(c.readMessage(4), std::out_of_range);
    EXPECT_THROW(c.addMessage(m3), std::runtime_error);
}

