#include "gtest/gtest.h"
#include <src/thread_pool.h>



TEST(BasicPoolTest, Test1)
{
    EXPECT_EQ(fx::PoolTest(), 1);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
