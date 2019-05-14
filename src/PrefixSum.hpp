#pragma once

#include <vector>
#include <iostream>

using namespace std;

class PrefixSum
{
public:
    int passingCars(vector<int> &A);
    vector<int> genomicRangeQuery(string& S, vector<int>& P, vector<int>& Q);
    vector<int> changeStringToInt(string& S);
    int countDiv(int A, int B, int K);
    int countDiv2(int A, int B, int K);
};
