#include <stdio.h>
#include <stdlib.h>
int main()
{
// https://prnt.sc/3bd1jqSREIlb
    // 1 1 1 1
    // 2 4 3 5 11 9 13 15
    // 2 4 6 8 1 5 9 17 7 3 13

    int test;
    scanf("%d", &test);

    while (test--)
    {

        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        // printf("even-%d odd-%d\n",even,odd);
        int diff = abs(even - odd);
        if (even == n || odd == n)
        {
            printf("%d\n", n / 2);
        }

        else if (diff % 2 == 0)
        {
            printf("%d\n", diff / 2);
        }

        else
        {
            printf("-1\n");
        }
    }

    return 0;
}