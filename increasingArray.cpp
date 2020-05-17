#include <bits/stdc++.h>
//note works but can be improved effiency wise at it fails test case #6
using namespace std;
int main()
{
    string s;
    string t;
    getline(cin, t);
    getline(cin, s);
    vector<long long> v;
    long long start = 0;
    long long len = 1;
    for (unsigned long long i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ' ' || i == s.length() - 1)

        {
            v.push_back(stoi(s.substr(start, len)));
            start = i + 1;
        }
        else
        {
            len++;
        }
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