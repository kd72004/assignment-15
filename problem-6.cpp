#include<bits/stdc++.h>
using namespace std;
void reverse_display(int []);
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    reverse_display(a);
}
void reverse_display(int a[])
{
    for(int i=9;i>=0;i--)
    cout<<a[i]<<endl;
}
