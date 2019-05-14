#include "BinaryGap.hpp"

int BinaryGap::findLongestGap(int n)
{
    vector<int> v {};
    int gap = 0;
    int longestGap = 0;

    while (n > 0 && n % 2 == 0){
        v.push_back(n % 2);
        n /=2;
    }
    while (n > 0)
    {
        v.push_back(n % 2);
        if (v.back() == 1)
            gap = 0;
        else
        {
            gap++;
            if (gap > longestGap)
                longestGap = gap;
        }
        n = n / 2;
    }

    return longestGap;
}
