#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long places = i * i * (i * i - 1) / 2;
        long long less = 2 * (i - 2) * (2 * (i - 4) + 6);
        cout << places - less << "\n";
    }
}
