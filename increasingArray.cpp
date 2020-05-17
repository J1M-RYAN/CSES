#include <bits/stdc++.h>
//optimised after using a better way to input numbers,no longer parsing strings, speed improved dramatically
using namespace std;
int main()
{
    string s;
    long long t;
    cin >> t;

    vector<long long> v;
    long long x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    long long total = 0;
    if (v.size() == 1)
    {
        cout << total;
        return 0;
    }
    long long last = LONG_LONG_MIN;
    long long newMin = LONG_LONG_MIN;
    for (unsigned long long i = 0; i < v.size(); i++)
    {
        long long currentValue = v.at(i);
        if (i != 0)
        {
            newMin = max(last, newMin);
            if (last > currentValue)
            {
                if (last < newMin)
                {
                    total += newMin - last;
                }
            }
            else
            {
                if (last < newMin)
                {
                    total += newMin - last;
                }
            }
        }
        last = currentValue;
        if (i == v.size() - 1)
        {
            if (currentValue < newMin)
            {
                total += newMin - currentValue;
            }
        }
    }
    cout << total;
}