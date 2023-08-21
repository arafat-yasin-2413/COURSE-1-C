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
            if(i == j)
            {
                if(a[i][j] !=a [0][0]);
                    flag = false;

                continue;
            }
            // 46 no. line a 'continue' na dile পরের 'if' টাকে 'else if' করে দিতে হবে। কারণ এইখেত্রে ডায়াগোনালের এলিমেন্ট নট জিরো কিনা সেটা তো চেক করার দরকার নেই। আর যদি 'else if' না দিই তাহলে অবশ্যই 'continue' দিয়ে পরের 'if' টাকে নিয়মানুযায়ী 'skip' করতে হবে। 'না বুঝলে মডিউলের ভিডিও টা দ্যাখ শয়তান'
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == true)
    {
        printf("Scalar Matrix\n");
    }

    else 
    {
        printf("Not Scalar Matrix\n");
    }

   
    return 0;
}