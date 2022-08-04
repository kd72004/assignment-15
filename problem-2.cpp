#include<bits/stdc++.h>
using namespace std;
int   smallest_number (int []);
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    cout<<"smallest number is -> "<< smallest_number(a)<<endl;
}

int  smallest_number (int a[])
{
    int min=a[1];
    for(int i=0;i<=9;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}