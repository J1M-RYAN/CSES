#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int total = 1;
    int runningSum = 0;
    char currentChar = s.at(0);
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == currentChar)
        {
            runningSum++;
            if (runningSum > total)
            {
                total = runningSum;
            }
        }
        else
        {
            runningSum = 1;
            currentChar = s.at(i);
        }
    }
    cout << total;
}