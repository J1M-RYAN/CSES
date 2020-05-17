#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    string s;
    getline(cin, n);
    getline(cin, s);
    vector<int> v;
    int start = 0;
    int subStrLen = 1;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ' ' || i == (s.length() - 1))
        {
            v.push_back(stoi(s.substr(start, subStrLen)));
            start = (i + 1);
            subStrLen = 1;
        }
        else
        {
            subStrLen++;
        }
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < stoi(n); i++)
    {
        if (i == stoi(n) - 1)
        {
            cout << (i + 1);
            break;
        }
        if (v.at(i) != i + 1)
        {
            cout << (i + 1);
            break;
        }
    }
}