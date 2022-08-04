#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5], count=1;
    for (int i = 0; i <= 4; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i <= 4; i++)
    {
        count=1;
        for (int j = i + 1; j <= 4; j++)
        {
            if(a[i]==-1)
            break;
            if (a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
        }
        if(a[i]!=-1)
        printf("frequency of %d is %d\n",a[i],count);
    }
}
