// problem statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/replace-it-1-1/problem


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string a[t];

    for (int i = 0; i < t; i++)
    {
        string s;

        string x;

        cin >> s >> x;

        int sz = x.size();
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), sz, "$");
        }

        a[i] = s;
    }

    for (int i = 0; i < t; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
