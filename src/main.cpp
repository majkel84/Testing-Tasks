#include <iostream>
#include "BinaryGap.hpp"
#include "Arrays.hpp"
#include "PermCheck.hpp"
#include "PrefixSum.hpp"

using namespace std;

int main()
{
    PrefixSum ps;
    string str = "CAGCCTA";
    vector<int> v = ps.changeStringToInt(str);

    for (const auto& it: v)
        cout << it << '\n';

    return 0;
}
