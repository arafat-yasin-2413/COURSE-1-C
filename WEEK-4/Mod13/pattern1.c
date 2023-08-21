#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
     int k = 1;
    for(int i= 1; i<=n; i++)
    {
        for(int j = 1; j<=k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
        
    }



// *****
// ****
// ***
// **
// *
    // int  k = n;
    // for(int i = n; i>=1; i--)
    // {
    //     for(int j = 1; j<=k; j++)
    //     {
    //         printf("*");
    //     }
    //     k--;
    //     printf("\n");
    // }
    return 0;
}