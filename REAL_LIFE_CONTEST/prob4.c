// https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/hash-star-pattern

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i == (n/2)+1)
            {
                printf("#");
            }

            else if(j == (n/2)+1)
            {
                printf("#");
            }

            else
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}