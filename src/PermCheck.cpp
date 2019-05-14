#include "PermCheck.hpp"
#include <algorithm>
#include <numeric>
#include <iterator>

int PermCheck::checkIsPermut(vector<int> &A)
{
    if (A.empty())
        return 0;

    if (A.size() == 1 && A.back() == 1)
        return 1;

    int sum = 0;
    for (auto it = 1; it <= A.size(); it++)
        sum += it;

    sort(A.begin(), A.end());
    auto last = unique(A.begin(), A.end());
    A.erase(last, A.end());
    int uniqueSum = accumulate(A.begin(), A.end(), 0);

    if (sum == uniqueSum)
        return 1;

    return 0;
}

int PermCheck::FrogRiverOne(int X, vector<int> &A)
{
    int position = -1;
    int maxPosition = -1;

    for (auto iter = 1; iter <= X; iter++)
        if (any_of(A.begin(), A.end(), [iter](int i){return i == iter;}))
        {
            auto it = std::find(A.begin(), A.end(), iter);
            position = distance(A.begin(), it);
            if (position > maxPosition)
                maxPosition = position;
        }
        else {return -1;}

    return maxPosition;
}

vector<int> PermCheck::maxCounter(int N, vector<int> &A)
{
    vector<int> solution(N, 0);
    int currentMax = 0;
    int finalMax = 0;
    int currentValue = 0;

    for (auto it = 0; it < A.size(); it ++)
    {
        if (A.at(it) == N + 1)
            fill(solution.begin(), solution.end(), currentMax);
        else if (A.at(it) <= N)
        {
            int currentValue = A.at(it) - 1;
            currentMax = solution.at(currentValue) + 1;
            if (currentMax > finalMax)
                finalMax = currentMax;
            solution.at(currentValue) = currentMax;
        }
    }

    return solution;
}

int PermCheck::missingInteger(vector<int> &A)
{
    int solution = 1;

    sort(A.begin(), A.end());
    auto it = remove_if(A.begin(), A.end(),  [](const int i) {return i < 0; });
    A.erase(it, A.end());
    if(A.front() != 1)
        return solution;
    it = std::unique(A.begin(), A.end());
    A.erase(it, A.end());

    for (int it = 1; it < A.size(); it++)
    {
        if ((A.at(it) - A.at(it - 1)) != 1 )
            return (A.at(it - 1) + 1);
    }

    if (A.size() == 1 && A.front() == 1)
        return solution + 1;

    if (A.size() > 1)
        return (A.back() + 1);

    return solution;
}
