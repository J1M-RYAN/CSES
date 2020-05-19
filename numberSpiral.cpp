#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long numtests;
    cin >> numtests;
    vector<vector<long long>> vv;
    for (long long i = 0; i < numtests; i++)
    {
        long long x, y;
        cin >> x >> y;
        vector<long long> v;
        v.push_back(x);
        v.push_back(y);
        vv.push_back(v);
    }
    for (long long i = 0; i < numtests; i++)
    {
        long long a = vv.at(i).at(0);
        long long b = vv.at(i).at(1);
        if (a == b)
        {
            cout << (a * a) - a + 1 << "\n";
        }
        else if (b > a)
        {
            long long diag = (b * b) - b + 1;
            if (b % 2 == 0)
            {
                while (a != b)
                {
                    diag--;
                    b--;
                }
            }
            else
            {
                while (a != b)
                {
                    diag++;
                    b--;
                }
            }
            cout << diag;
        }
        else
        {
            long long diag = (a * a) - a + 1;
            if (a % 2 == 0)
            {
                while (a != b)
                {
                    diag++;
                    a--;
                }
            }
            else
            {
                while (a != b)
                {
                    diag--;
                    a--;
                }
            }
            cout << diag;
        }
        cout << "\n";
    }
}