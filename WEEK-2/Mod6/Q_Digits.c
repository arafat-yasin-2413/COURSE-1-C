#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    while (test--)
    {

        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            printf("0 \n");
        }

        else
        {

            while (x != 0)
            {
                printf("%d ", x % 10);
                x = x / 10;
            }
            printf("\n");
        }
    }

    return 0;
}