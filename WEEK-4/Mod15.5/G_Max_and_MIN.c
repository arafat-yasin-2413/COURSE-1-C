#include<stdio.h>

void maxandmin(int n)
{
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int mn = a[0];
    for(int i = 1; i<n ; i++)
    {
        if(a[i] < mn)
        {
            mn = a[i];
        }
    }

    int mx = a[0] ;
    for(int i = 1; i<n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
        }
    }


    printf("%d %d\n",mn,mx);
}

int main()
{
    int n;
    scanf("%d",&n);

    maxandmin(n);


    

    return 0;
}