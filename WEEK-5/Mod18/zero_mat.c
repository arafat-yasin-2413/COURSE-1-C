#include<stdio.h>
int row, col;

void input_matr(int a[row][col])
{   

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
}

void output_matr(int a[row][col])
{
    
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    
    scanf("%d %d",&row,&col);

    int a[row][col];
    input_matr(a);
    // output_matr(a);

    int cnt=0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(a[i][j] == 0)
            {
                cnt++;
            }
        }
    }

    int elements = row*col;
    if(cnt==elements)
    {
        printf("This is a Zero Matrix\n");
    }
    else 
    {
        printf("Not a Zero Matrix\n");
    }


    

    return 0;
}