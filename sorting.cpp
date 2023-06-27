// problem statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/sort-it-6-2

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b)
{
    int totalMarksA = a.math + a.eng;
    int totalMarksB = b.math + b.eng;

    if (totalMarksA != totalMarksB)
    {
        return totalMarksA > totalMarksB;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
