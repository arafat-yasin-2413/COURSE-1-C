#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row, col;
    row = n, col =  n;
    int a[row][col];

    for(int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    bool isUnit = true;
    if(row != col)
        isUnit = false;

    for(int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    isUnit = false;
                }
                continue;
            }

            if(a[i][j] != 0)
            {
                isUnit = false;
            }
        }
    }

    
    // printf("%d\n",isUnit);
    if(isUnit == true)  
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}