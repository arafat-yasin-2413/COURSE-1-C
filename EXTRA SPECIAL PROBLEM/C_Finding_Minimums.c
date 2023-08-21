// Abdullah Al Naim Vai
#include<stdio.h>
#include<limits.h>
int main()
{
    // 1. first robot --> 0 to last 
    // 2. sec robbot --> kothay kothay group complete hoise
    // 3. 


    int n,k;
    scanf("%d %d",&n,&k);


    int a[n];
    for(int i = 0 ; i<n; i++)
        scanf("%d",&a[i]);


    int mn = INT_MAX;
    int j = k-1;
    for(int i = 0; i<n; i++)
    {
        if(a[i]<mn)
        {
            mn = a[i];
        }

        if(i == j || i == n-1)
        {
            printf("%d ",mn);
            j+=k;
            mn = INT_MAX;
        }
    }

    // if(n%k != 0)
    //     printf("%d ",mn);


































    // int n,k;
    // scanf("%d %d",&n,&k);

    // int a[n];
    // for(int i = 0 ; i<n; i++)
    //     scanf("%d",&a[i]);

    
    
    // int j =k-1; // first group complete hobey (k-1) index a
    // int mn =INT_MAX;

    // for(int i = 0;i<n;i++)
    // {
    //     if(a[i] <mn)
    //     {
    //         mn = a[i];
    //     }

    //     if(i == j || i==n-1) // group complete hocche , setai check korchi
    //     {
    //         printf("%d ",mn);
    //         j+= k;
    //         mn = INT_MAX; 
    //     }
    // }

    // // if(n % k != 0)
    // // {
    // //     printf("%d ",mn);
    // // }
    

    return 0;
}





/// ME
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int range = k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int run = ceil(n / (double)k);
    // printf("%d\n",run);

    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == run)
        {
            break;
        }

        int mn = a[start];
        for (int j = start; j < range; j++)
        {

            if (j == n)
                break;
            // printf("j- %d \n", j);

            else if (a[j] < mn)
            {
                mn = a[j];
            }
        }
        printf("%d ", mn);

        start += k;
        range += k;
    }

    return 0;
}

*/