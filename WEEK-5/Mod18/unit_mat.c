#include <stdio.h>
#include <stdbool.h>
int row, col;
void input_matr(int a[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
}
void output_matr(int a[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    
    scanf("%d %d", &row, &col);
    int a[row][col];
    input_matr(a);
    // output_matr(a);

    bool flag = 1;

    if(row != col)
        flag = 0;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }

            if(a[i][j] != 0)
                flag = 0;
        }
    }

    // printf("%d\n",flag);
    if(flag == 1)
    {
        printf("Unit Matrix\n");
    }

    else 
    {
        printf("Not Unit Matrix\n");
    }

   
    return 0;
}