#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);

    int mn = a[0];
    for(int i = 1;i<n; i++)
    {
        if(a[i] < mn)
            mn = a[i];
    }

    // printf("%d\n",mn);

    int count = 0;
    for(int i = 0 ; i<n; i++)
    {
        if(a[i] == mn)
        {
            count++;
        }
    }

    if(count % 2 == 0) printf("Unlucky\n");
    else printf("Lucky\n");
    

    return 0;
}