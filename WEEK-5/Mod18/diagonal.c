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
    bool flag = true;
    scanf("%d %d", &row, &col);
    int a[row][col];
    input_matr(a);
    // output_matr(a);

    if (row != col)
        flag = false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // if(i==j)// primary diagonal
            if (i + j == row - 1) // secondary diagonal
                continue;
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // printf("%d\n",flag);
    // if(flag == 1)
    //     printf("Primary Diagonal\n");

    // else
    //     printf("Not Primary Diagonal\n");

    if (flag == 1)
        printf("Secondary Diagonal\n");

    else
        printf("Not Secondary Diagonal\n");
    return 0;
}