#include "Sorting.hpp"
#include <algorithm>

int Sorting::Distinct(vector<int> &A)
{
    sort(A.begin(), A.end());
    auto last = std::unique(A.begin(), A.end());
    A.erase(last, A.end());
    return A.size();
}

int Sorting::MaxProductOfThree(vector<int> &A)
{
    int solution = 1;
    vector<int> maxValues {};

    sort(A.begin(), A.end());

    if (A.back() == 0)
        return 0;

    if (A.front() >= 0 || A.back() <= 0)
    {
        for (int it = A.size() - 3; it < A.size(); it++)
            if (A[it] != 0)
                solution *= A[it];
        return solution;
    }

    int itNegative = 0;
    int itPositive = A.size() - 1;

    while (maxValues.size() < 3)
    {
        if (abs(A[itNegative]) < A[itPositive])
        {
            maxValues.emplace_back(A[itPositive]);
            itPositive -= 1;
        }
        else
        {
            maxValues.emplace_back(A[itNegative]);
            itNegative += 1;
        }
    }

    if (itNegative == 1 || itNegative == 3)
    {
        maxValues.clear();
        for(int it = A.size() - 3; it < A.size(); it++ )
            maxValues.emplace_back(A[it]);
    }

    for (const auto& it: maxValues)
        if (it != 0)
            solution *= it;

    return solution;
}

int Sorting::NumberOfDiscIntersection(vector<int> &A)
{
    int j, solution = 0;

    for (auto i = A.size()-1; i >= 1; i--)
        for (j = i-1; j >= 0; j--)
        {
            if (solution >= 10000000)
                return -1;
            if (i - j <= A[i] + A[j])
            {
                solution += 1;
                //cout << "i[" << i - 1 << "] " << A[i] << "  ";
                //cout << "j[" << j - 1 << "] " << A[j] << "  ";;
                //cout << "s: " << solution << '\n';
            }
        }

    return solution;
}
