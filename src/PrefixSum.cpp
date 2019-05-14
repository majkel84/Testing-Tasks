#include "PrefixSum.hpp"
#include <algorithm>

int PrefixSum::passingCars(vector<int> &A)
{
    int firstCarDirection = A.front();
    int carsInDirectionOfFirst = 0;
    int carPassed = 0;

    for (const auto& iter : A)
    {
        if (iter == firstCarDirection)
            carsInDirectionOfFirst += 1;
        else
        {
            carPassed += carsInDirectionOfFirst;
            if (carPassed > 1000000000 || carPassed < -1000000000)
                return -1;
        }
    }
    return carPassed;
}

vector<int> PrefixSum::changeStringToInt(string &S)
{
    vector<int> vectorOfInt {};
    for (auto& it: S)
    {
        switch (it)
        {
            case 'A': vectorOfInt.emplace_back(1); break;
            case 'C': vectorOfInt.emplace_back(2); break;
            case 'G': vectorOfInt.emplace_back(3); break;
            case 'T': vectorOfInt.emplace_back(4); break;
        default:
            break;
        }
    }
    return vectorOfInt;
}

vector<int> PrefixSum::genomicRangeQuery(string &S, vector<int> &P, vector<int> &Q)
{
    vector<int> minimalImpactFactor {};
    vector<int> intForGen= changeStringToInt(S);

    for (auto it = 0; it < P.size(); it++)
    {
        int minValue = 4;
        for (int it2 = P.at(it); it2 <= Q.at(it); it2++)
            if (intForGen[it2] < minValue)
                minValue = intForGen[it2];
        minimalImpactFactor.emplace_back(minValue);
    }

    return minimalImpactFactor;
}

int PrefixSum::countDiv(int A, int B, int K)
{
    int divCouter = 0;
    vector<int> numberRange {};

    for (int it = A; it <= B; it++)
        numberRange.emplace_back(it);

    divCouter = count_if(numberRange.begin(), numberRange.end(), [K](int number) {
        return number % K == 0;
    });

    return divCouter;
}

int PrefixSum::countDiv2(int A, int B, int K)
{
    int divCouter = 0;

    for (int it = A; it <= B; it++)
    {
        if (it % K == 0)
            divCouter++;
    }

    return divCouter;
}


