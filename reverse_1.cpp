// problem statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/get-reverse

#include <iostream>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].math >> a[i].eng;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
