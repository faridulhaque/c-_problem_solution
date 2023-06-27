// problem statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-03/challenges/get-reverse-1

#include <iostream>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i].id;
        a[i].id = a[n - 1 - i].id;
        a[n - 1 - i].id = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }

    return 0;
}
