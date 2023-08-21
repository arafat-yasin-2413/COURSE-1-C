#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s =n-1, k = 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i < n)
        {
            s--;
            k += 2;
        }

        else if(i == n)
        {
            s=0;
            k=2*n-1;
        }
        else 
        {
            s++;
            k-=2;
        }
        printf("\n");
    }

    // int s2 = 0, k2 = 2*n-1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= s2; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j <= k2; j++)
    //     {
    //         printf("*");
    //     }

    //     s2++;
    //     k2 -= 2;

    //     printf("\n");
    // }

    return 0;
}