#include <gtest/gtest.h>
#include "PermCheck.hpp"

struct TestPermCheck : public ::testing::Test
{
    PermCheck pc;
    int result;
};

TEST_F(TestPermCheck, checkEmptyVector)
{
    vector<int> a = {};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPermCheck, checkVectorWithOne)
{
    vector<int> a = {1};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 1);
}

TEST_F(TestPermCheck, checkVectorWithTwo)
{
    vector<int> a = {2};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPermCheck, checkVectorNoPermut)
{
    vector<int> a = {2, 1, 5, 2, 1};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPermCheck, checkVectorPermut)
{
    vector<int> a = {2, 1, 5, 3, 4};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 1);
}

TEST_F(TestPermCheck, checkVectorSumEqualSizeSum)
{
    vector<int> a = {5, 1, 5, 2, 2};
    result = pc.checkIsPermut(a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPermCheck, checkFrogVectorOne)
{
    vector<int> a = {1};
    result = pc.FrogRiverOne(1, a);
    ASSERT_EQ(result, 0);
}

TEST_F(TestPermCheck, checkFrogSortedVector)
{
    vector<int> a = {1, 2, 3, 4, 5,};
    result = pc.FrogRiverOne(5, a);
    ASSERT_EQ(result, 4);
}

TEST_F(TestPermCheck, checkFrogMissingElemeInVector)
{
    vector<int> a = {1, 5, 2, 4, 2,};
    result = pc.FrogRiverOne(5, a);
    ASSERT_EQ(result, -1);
}

TEST_F(TestPermCheck, checkFrogInVector)
{
    vector<int> a = {1, 1, 6, 7, 3, 5, 2, 4, 2,};
    result = pc.FrogRiverOne(5, a);
    ASSERT_EQ(result, 7);
}

TEST_F(TestPermCheck, checkMaxCountVector)
{
    vector<int> a = {3, 4, 4, 6, 1, 4, 4};
    vector<int> solution = pc.maxCounter(5, a);
    vector<int> exampleSolution = {3, 2, 2, 4, 2};
    ASSERT_EQ(solution, exampleSolution);
}

TEST_F(TestPermCheck, checkMaxIntegerPossitiveVector)
{
    vector<int> a = {1, 2, 3};
    result = pc.missingInteger(a);
    ASSERT_EQ(result, 4);
}

TEST_F(TestPermCheck, checkMaxIntegerPossitiveVectorWithGap)
{
    vector<int> a = {1, 3, 6, 4, 1, 2};
    result = pc.missingInteger(a);
    ASSERT_EQ(result, 5);
}

TEST_F(TestPermCheck, checkMaxIntegerNegativeVector)
{
    vector<signed int> a = {-1, -3};
    result = pc.missingInteger(a);
    ASSERT_EQ(result, 1);
}

TEST_F(TestPermCheck, checkMaxIntegerVectorWIthGapAndNegatives)
{
    vector<signed int> a = {1, 3, -3, 6, 4, 1, 2, -1, -3};
    result = pc.missingInteger(a);
    ASSERT_EQ(result, 5);
}
