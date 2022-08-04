#include <bits/stdc++.h>
using namespace std;
void sort_array(int[],int );
int main()
{
    int n;
    cout<<"Enter limit -> "<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    sort_array(a,n);
}
void sort_array(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<endl;
    }
}
