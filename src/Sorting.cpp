#include "Sorting.hpp"
#include <algorithm>

int Sorting::Distinct(vector<int> &A)
{
    sort(A.begin(), A.end());
    auto last = std::unique(A.begin(), A.end());
    A.erase(last, A.end());
    return A.size();
}
