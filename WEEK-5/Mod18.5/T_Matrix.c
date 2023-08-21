#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int row = n, col = n;
    int a[row][col];

    int primary=0, secondary = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
            {
                scanf("%d",&a[i][j]);
                if(i==j)
                {
                    primary += a[i][j];
                }

                if(i+j == n-1)
                {
                    secondary += a[i][j];
                }
            }
    }

    // printf("%d %d\n",primary,secondary);
    int diff = abs(primary-secondary);

        printf("%d\n",diff);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int pri = 0, sec = 0;
//     for(int i = 0, j = 0; i<n; i++,j++)
//         pri+=a[i][j];

//     for(int i = 0,j = n-1; i<n; i++,j--)
//         sec+=a[i][j];

//     printf("%d",abs(pri-sec));

//     return 0;
// }

