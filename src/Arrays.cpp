#include "Arrays.hpp"
#include <algorithm>

vector<int> Arrays::cyclicRotation(vector<int>& A, int K)
{
    vector<int> solution {};

    for (int i = 0; i < K; i++)
    {
        solution.clear();
        solution.emplace_back(A.back());
        for(const auto& it : A)
        {
            solution.emplace_back(it);
        }
        solution.pop_back();
        A = solution;
    }

    return solution;
}

int Arrays::OddOccurrencesInArray(vector<int> &A)
{
    int solution = 0;
    int noOfElements = 0;

    for(const auto& it : A)
    {
        noOfElements = 0;
        noOfElements = count(A.begin(), A.end(), it);
                if (noOfElements == 1)
                    solution += it;
    }
    return solution;
}
