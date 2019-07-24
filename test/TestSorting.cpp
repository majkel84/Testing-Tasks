#include <gtest/gtest.h>
#include "Sorting.hpp"

struct TestSorting : public ::testing::Test
{
    Sorting so;
    int result;
};

TEST_F(TestSorting, checkDistinctCodilityExmpl)
{
    vector<int> a = {2, 1, 1, 2, 3, 1};
    result = so.Distinct(a);
    ASSERT_EQ(result, 3);
}

TEST_F(TestSorting, checkDistinctOnlyOnes)
{
    vector<int> a(10, 1);
    result = so.Distinct(a);
    ASSERT_EQ(result, 1);
}

TEST_F(TestSorting, checkMaxOfThreeOnlyPositives)
{
    vector<int> a {5, 4, 8, 10, 2, 1};
    result = so.MaxProductOfThree(a);
    ASSERT_EQ(result, 400);
}

TEST_F(TestSorting, checkMaxOfThreeOnlyNegatives)
{
    vector<int> a {-5, -4, -8, -10, -2, -1};
    result = so.MaxProductOfThree(a);
    ASSERT_EQ(result, -8);
}

TEST_F(TestSorting, checkMaxOfThreeCodilityExmpl)
{
    vector<int> a {-3, 1, 2, -2, 5, 6};
    result = so.MaxProductOfThree(a);
    ASSERT_EQ(result, 60);
}

TEST_F(TestSorting, checkMaxOfThreePositiveAndNegatives)
{
    vector<int> a {-3, 1, 2, -2, 5, -6};
    result = so.MaxProductOfThree(a);
    ASSERT_EQ(result, 90);
}

TEST_F(TestSorting, checkNumberOfDiscIntersection)
{
    vector<int> a {1, 5, 2, 1, 4, 0};
    result = so.NumberOfDiscIntersection(a);
    ASSERT_EQ(result, 11);
}
