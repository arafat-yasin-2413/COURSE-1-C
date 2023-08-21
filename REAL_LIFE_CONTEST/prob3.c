// https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/highest-marks-1

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int mx = -1;
    for(int i = 0; i<n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
        }
    }

    // printf("%d\n",mx);
    for(int i = 0 ; i<n; i++)
    {
        printf("%d ",mx-a[i]);
    }



    return 0;
}