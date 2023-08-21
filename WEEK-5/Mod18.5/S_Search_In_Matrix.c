#include<stdio.h>
#include<stdbool.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    int flag = false;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(a[i][j] == x)
            {
                flag = true;
            }

        }
    }

    // printf("%d\n",flag);
    if(flag == false)
        printf("will take number\n");
    else 
        printf("will not take number\n");
    return 0;
}