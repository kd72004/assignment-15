#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }

    int r = 0;
    cout << "Enter number of rotation -> ";
    cin >> r;

    string d;
    cout << "Enter Direction -> ";
    cin >> d;

    if (d == "left")
    {
        while (r)
        {
            int temp = a[0];
            for (int i = 1; i <= 4; i++)
                a[i - 1] = a[i];
            a[4] = temp;
            r--;
        }
    }
    else
    {
        while (r)
        {
            int temp = a[4];
            for (int i = 3; i >= 0; i--)
                a[i + 1] = a[i];
            a[0] = temp;
            r--;
        }
    }

    for (int i = 0; i <= 4; i++)
        cout << a[i] << endl;
}