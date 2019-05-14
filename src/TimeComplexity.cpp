#include "TimeComplexity.hpp"
#include <algorithm>
#include <numeric>
#include <cmath>

int TimeComplexity::countFrogJumps(int start, int finish, int stepSize)
{
    int result = finish - start;
    if (result % stepSize == 0)
        result /= stepSize;
    else
        result = result / stepSize + 1;
    return result;
}

int TimeComplexity::permMissingElem(vector<int> &A)
{
    if (A.empty())
        return 1;
    if (A.size() == 1 && A.front() != 1)
        return 1;

    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
        if (A.at(i+1) - A.at(i) != 1)
            return i+2;
    if (A.size() == A.back())
        return A.back() + 1;
    return 1;
}

int TimeComplexity::tapeEquilibrum(vector<int> &A)
{
    if (A.size() == 1)
        return 0;

    vector<int> difference {};
    int pLeft = 0;
    int pRight = accumulate(A.begin(), A.end(), 0);

    for (const auto& it : A)
    {
        pLeft += it;
        pRight -= it;
        difference.emplace_back(abs(pLeft - pRight));
    }

    sort(difference.begin(), difference.end());

    return difference.front();
}
