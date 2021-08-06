#include <gtest/gtest.h>
#include "Worker.hpp"

class Some: public ::testing::Test
{
public:
    void SetUp() override
    {}
    void TearDown() override
    {}
};

TEST_F(Some, Right)
{
    Worker w;
    EXPECT_EQ(w.Summ(2,1), 3);
}

TEST_F(Some, Wrong)
{
    Worker w;
    EXPECT_EQ(w.WrongSumm(2,1),3);
}