#include<bits/stdc++.h>
using namespace std;
void  unique_elements (int []);
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    unique_elements(a);
}
void unique_elements(int a[10])
{
    int flag=0;
    for(int i=0;i<=9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[j]==a[i])
            flag=1;
            break;
        }
        if(flag==0)
        cout<<a[i]<<endl;
    }
}