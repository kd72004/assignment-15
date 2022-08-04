#include<bits/stdc++.h>
using namespace std;
int  greatest_number (int [] );
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    cout<<" greatest number is -> ";
    cout<< greatest_number(a)<<endl;
}
int  greatest_number(int a[])
{
    int max=a[1];
    for(int i=0;i<=9;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}