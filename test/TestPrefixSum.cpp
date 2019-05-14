#include <gtest/gtest.h>
#include "PrefixSum.hpp"

struct TestPrefixSum : public ::testing::Test
{
    PrefixSum ps;
    int result;
    vector<int> result2;
};

TEST_F(TestPrefixSum, checkCarsTwoByTwoOpposite)
{
    vector<int> a = {0, 1, 0, 1};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 3);
}

TEST_F(TestPrefixSum, checkCarsTwoInMiddleOpposite)
{
    vector<int> a = {0, 1, 1, 0};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 2);
}

TEST_F(TestPrefixSum, checkCarsTwoByTwoOppositeStartFromOtherDirection)
{
    vector<int> a = {1, 0, 1, 0};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 3);
}

TEST_F(TestPrefixSum, checkCarsOneDirection)
{
    vector<int> a = {1, 1, 1, 1};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPrefixSum, checkCarsLastOtherDirection)
{
    vector<int> a = {1, 1, 1, 1, 0};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 4);
}

TEST_F(TestPrefixSum, checkCarsFirstOtherDirection)
{
    vector<int> a = {0, 1, 1, 1, 1, 0};
    result = ps.passingCars(a);
    ASSERT_EQ(result, 4);
}

TEST_F(TestPrefixSum, CheckGenVectorOne)
{
    string s = "ACG";
    vector<int> p = {0, 0, 0};
    vector<int> q = {1, 1, 1};
    vector<int> correctAnwser = {1, 1, 1};
    result2 = ps.genomicRangeQuery(s, p, q);
    ASSERT_EQ(result2, correctAnwser);
}

TEST_F(TestPrefixSum, checkDivCounterCodilityExample)
{
    result = ps.countDiv2(6, 11, 2);
    ASSERT_EQ(result, 3);
}

TEST_F(TestPrefixSum, checkDivCounterOneGoodNumber)
{
    result = ps.countDiv2(6, 6, 2);
    ASSERT_EQ(result, 1);
}

TEST_F(TestPrefixSum, checkDivCounterNoNumber)
{
    result = ps.countDiv2(1, 3, 4);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPrefixSum, checkDivCounterBorderNumbers)
{
    result = ps.countDiv2(10, 20, 10);
    ASSERT_EQ(result, 2);
}

