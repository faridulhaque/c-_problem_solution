// problem statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/find-ratul

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    string word;

    bool y = false;

    while (ss >> word)
    {
        if (word == "Ratul")
        {
            y = true;
            break;
        }
    }

    if (y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
