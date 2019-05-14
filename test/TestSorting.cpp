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
