#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
        printf("^\n");
    else
    {

        int s = n - 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= i * 2 - 1; j++)
            {
                if (i % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf("^");
                }
            }

            printf("\n");
        }
    }

    return 0;
}