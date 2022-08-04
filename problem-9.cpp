#include <bits/stdc++.h>
using namespace std;
void sorting_merg(int[], int[]);
int main()
{
    int a[5], b[5];
    for (int i = 0; i <= 4; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i <= 4; i++)
        scanf("%d", &b[i]);
    sorting_merg(a, b);
}
void sorting_merg(int a[], int b[])
{
    int size=10;
    int c[size];
    int j=0;
    for(int i=0;i<size/2;i++)
    {
        c[i]=a[i];
    }
    for(int i=size/2;i<size;i++)
    {
        c[i]=b[j++];
    }
    for (int i = 0; i <= 8; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (c[i] < c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i=0;i<=9;i++)
    cout<<c[i]<<endl;
}