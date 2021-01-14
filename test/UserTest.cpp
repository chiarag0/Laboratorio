//
// Created by Chiara on 23/09/2020.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(UserTest, GetterSetter) {
    User u ("Marco");
    ASSERT_EQ(u.getName(), "Marco" );
    u.setName("Edoardo");
    ASSERT_EQ(u.getName(), "Edoardo");
}
