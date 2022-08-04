#include <bits/stdc++.h>
using namespace std;
int first_accurence(int[]);
int main()
{
    int a[10];
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }
    cout <<"index no -> "<< first_accurence(a) << endl;
}
int first_accurence(int a[5])
{
    int dup = a[1];
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (a[i] == a[j])
            {
                cout <<"Duplicate value -> "<< a[j] <<endl;
                return j;
            }
        }
    }
    return 1;
}