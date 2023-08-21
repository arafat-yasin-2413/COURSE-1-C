#include <stdio.h>
#include <string.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int t = 0; t < k; t++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}