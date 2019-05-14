#include <gtest/gtest.h>
#include "BinaryGap.hpp"

struct TestBinaryGap : public ::testing::Test
{
    BinaryGap bg;
    int result;
};

TEST_F(TestBinaryGap, checkGapInAllZeros)
{
    result = bg.findLongestGap(0);
    ASSERT_EQ(result, 0);
}

TEST_F(TestBinaryGap, checkGapIn5)
{
    result = bg.findLongestGap(5);
    ASSERT_EQ(result, 1);
}

TEST_F(TestBinaryGap, checkGapIn10)
{
    result = bg.findLongestGap(10);
    ASSERT_EQ(result, 1);
}

TEST_F(TestBinaryGap, checkGapIn8)
{
    result = bg.findLongestGap(8);
    ASSERT_EQ(result, 0);
}

TEST_F(TestBinaryGap, checkGapIn124)
{
    result = bg.findLongestGap(124);
    ASSERT_EQ(result, 0);
}
