#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0 ; i<n; i++)
        scanf("%d",&a[i]);

    for(int i = 0, j = n-1; i<n/2, j>=n/2;i++,j--)
    {
        // printf("i-%d j-%d\n",i,j);
        if(i==j) 
        {
            printf("%d ",a[i]);
            break;
        }
        printf("%d ",a[i]);
        printf("%d ",a[j]);
    }

    return 0;
}