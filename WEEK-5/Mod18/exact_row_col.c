#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // int exact_row;
    // scanf("%d",&exact_row);
    // for(int i = 0; i<col; i++)
    // {
    //     printf("%d ",a[exact_row][i]);
    // }

    int exact_col;
    scanf("%d", &exact_col);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][exact_col]);
    }

    return 0;
}