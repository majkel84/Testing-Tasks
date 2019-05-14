#include <vector>
#include <gtest/gtest.h>
#include "Arrays.hpp"

struct TestArrays : public ::testing::Test
{
    Arrays a;
    std::vector<int> entry {};
    std::vector<int> resultVector {};
    int resultInt = 0;
};

TEST_F(TestArrays, checkRotationByThree)
{
    entry = {1, 2, 3, 4, 5,};
    resultVector = {3, 4, 5, 1, 2};
    ASSERT_EQ(a.cyclicRotation(entry, 3), resultVector);
}

TEST_F(TestArrays, checkOneElementByFive)
{
    entry = {-4};
    resultVector = {-4};
    ASSERT_EQ(a.cyclicRotation(entry, 5), resultVector);
}

TEST_F(TestArrays, checkOneDigitDiffrent)
{
    entry = {9, 3, 9, 3, 9, 7, 9};
    resultInt = 7;
    ASSERT_EQ(a.OddOccurrencesInArray(entry), resultInt);
}

TEST_F(TestArrays, checkOnePositiveElementVector)
{
    entry = {-4};
    resultInt = -4;
    ASSERT_EQ(a.OddOccurrencesInArray(entry), resultInt);
}

TEST_F(TestArrays, checkOnlyMultipleDigitsVector)
{
    entry = {-4, 3, -4, 2, 1, 1, 5, 3, 2, 5};
    resultInt = 0;
    ASSERT_EQ(a.OddOccurrencesInArray(entry), resultInt);
}

