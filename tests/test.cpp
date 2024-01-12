#include "gtest/gtest.h"
#include "src/main.h"

TEST(BasicPoolTest, Test1)
{
    EXPECT_EQ(test(), 1);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
