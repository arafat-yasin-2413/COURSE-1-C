#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d",&row,&col);

    int a[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Module approach 
    printf("\n");
    for(int i =1, j = 0; j<col; j++)
    {
        printf("%d ",a[i][j]);
    }

    printf("\n");
    for(int i =0,j =2; i<row; i++)
    {
        printf("%d ",a[i][j]);
    }

// conceptual Al Naim vaiya approach..(takes time but why?)
    // printf("\n");
    // for(int j = 0; j<col; j++)
    // {
    //     printf("%d ",a[1][j]);
    // }

    // printf("\n");
    // for(int i =0; i<row; i++)
    // {
    //     printf("%d ",a[i][2]);
    // }

    return 0;
}