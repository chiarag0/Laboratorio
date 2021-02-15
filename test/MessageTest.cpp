//
// Created by Chiara on 23/09/2020.
//

#include "gtest/gtest.h"
#include "../Message.h"

TEST(MessageTest, GetterSetter) {
    Message m ("Marco", "Luca", "Hello, how are you?");
    ASSERT_EQ(m.getSender(), "Marco" );
    ASSERT_EQ(m.getReceiver(), "Luca" );
    ASSERT_EQ(m.getText(), "Hello, how are you?" );
    ASSERT_EQ(m.isRead(), false );
    m.setRead(true);
    ASSERT_EQ(m.isRead(), true );
}
