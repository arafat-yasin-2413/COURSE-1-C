#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt[7]={0};
    for(int i = 0; i<n; i++)
    {
        int x ;
        x = a[i];
        cnt[x]++;
    }

    for(int i = 0; i<7; i++)
    {
        printf("%d -> %d\n",i,cnt[i]);
    }

    return 0;
}