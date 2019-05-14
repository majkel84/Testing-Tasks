#include <gtest/gtest.h>
#include "TimeComplexity.hpp"

struct TestTimeComplexity : public ::testing::Test
{
    TimeComplexity tc;
    int result;
};

TEST_F(TestTimeComplexity, checkSmallNumbersModZero)
{
    result = tc.countFrogJumps(3, 9, 2);
    ASSERT_EQ(result, 3);
}

TEST_F(TestTimeComplexity, checkSmallNumbersModPositive)
{
    result = tc.countFrogJumps(3, 10, 3);
    ASSERT_EQ(result, 3);
}

TEST_F(TestTimeComplexity, checkBigNumbersModPositive)
{
    result = tc.countFrogJumps(3, 1000000000, 3);
    ASSERT_EQ(result, 333333333);
}

TEST_F(TestTimeComplexity, checkVectorNoGaps)
{
    std::vector<int> A = {2, 3, 1, 5, 4};
    result = tc.permMissingElem(A);
    ASSERT_EQ(result, 6);
}

TEST_F(TestTimeComplexity, checkEmptyVector)
{
    std::vector<int> A = {};
    result = tc.permMissingElem(A);
    ASSERT_EQ(result, 1);
}

TEST_F(TestTimeComplexity, checkVectorWithGaps)
{
    std::vector<int> A = {2, 3, 1, 6, 4};
    result = tc.permMissingElem(A);
    ASSERT_EQ(result, 5);
}

TEST_F(TestTimeComplexity, checkCodilityExample)
{
    std::vector<int> A = {3, 1, 2, 4, 3};
    result = tc.tapeEquilibrum(A);
    ASSERT_EQ(result, 1);
}

TEST_F(TestTimeComplexity, checkVectorSizeOne)
{
    std::vector<int> A = {1};
    result = tc.tapeEquilibrum(A);
    ASSERT_EQ(result, 0);
}

TEST_F(TestTimeComplexity, checkVectorWithNegativeNumbers)
{
    std::vector<int> A = {4, 1, -1, 4, -4};
    result = tc.tapeEquilibrum(A);
    ASSERT_EQ(result, 4);
}
