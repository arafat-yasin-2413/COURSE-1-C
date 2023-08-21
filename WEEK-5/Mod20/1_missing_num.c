#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {

        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);

        int sum = a + b + c;
        printf("%d\n", s - sum);
    }

    return 0;
}