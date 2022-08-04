#include<bits/stdc++.h>
using namespace std;
int  duplicate_elements (int []);
int main()
{
    int a[7];
    for(int i=0;i<=6;i++)
    cin>>a[i];
    cout<<"Total duplicate elements are -> "<<duplicate_elements(a)<<endl;
}
int duplicate_elements(int a[])
{
    int count=0;
    for(int i=0;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
            
        }
    }
    return count;
}