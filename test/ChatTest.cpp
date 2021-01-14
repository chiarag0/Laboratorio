//
// Created by Chiara on 23/09/2020.
//

#include "gtest/gtest.h"
#include "../Chat.h"

User user1("Marco");
User user2("Luca");

TEST(ChatTest, GetterSetter) {
    Chat c ("Marco", "Luca");
    ASSERT_EQ(c.getFirstName(), "Marco");
    c.setFirstName("Lorenzo");
    ASSERT_EQ(c.getFirstName(), "Lorenzo");
    ASSERT_EQ(c.getSecondName(), "Luca");
    c.setSecondName("Edoardo");
    ASSERT_EQ(c.getSecondName(), "Edoardo");
}
