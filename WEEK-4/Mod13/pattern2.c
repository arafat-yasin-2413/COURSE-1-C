#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    // int s = n-1, k = 1;
    // for(int i = 1; i<=n; i++)
    // {
    //     /// space print kori
    //     for(int j = 1; j<=s; j++)
    //     {
    //         printf(" ");
    //     }

    //     /// star print kori
    //     for(int j = 1; j<=k ; j++)
    //     {
    //         printf("*");
    //     }

    //     s--;
    //     k+=2;
    //     printf("\n");
    // }




    int s = 0;
    int k = 2*n-1;

    for(int i = 1; i<=n; i++)
    {
        /// space print kori
        for(int j = 1; j<=s; j++)
        {
            printf(" ");
        }

        /// star print kori
        for(int j = 1; j<=k ; j++)
        {
            printf("*");
        }

        s++;
        k-=2;
        printf("\n");
    }

    return 0;
}