#include <gtest/gtest.h>

namespace 
{
    int Get42(){return 42;}
}

TEST(TestTopic, TrivialEquality)
{
    EXPECT_EQ(Get42(),42);
}

TEST(TestTopic, MoreEquality)
{
    ASSERT_EQ(Get42(), 2) << "Oh no, a mistake!";
    EXPECT_FLOAT_EQ(23.23F, 23.23F);
}