#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    int flag = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j)
            {
                if(a[i][j] != a[0][0])
                {
                    flag = 0;
                }
                continue;
            }

            if(a[i][j] != 0)// if, else if
            {
                flag = 0;
            }
        }

    }

    if(flag == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}