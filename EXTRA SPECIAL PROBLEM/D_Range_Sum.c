// https://prnt.sc/MAOXMwvNcVtY

#include <stdio.h>
int main()
{
    long long int a, b, sum_a, sum_b, sum;
    int test;
    scanf("%d", &test);

    while (test--)
    {

        scanf("%lld %lld", &a, &b);

        if (a < b)
        {
            sum_a = a * (a + 1) / 2;
            sum_b = b * (b + 1) / 2;

            sum = sum_b - sum_a + a;
            printf("%lld\n", sum);
        }

        else if (a >= b)
        {
            sum_a = a * (a + 1) / 2;
            sum_b = b * (b + 1) / 2;

            sum = sum_a - sum_b + b;
            printf("%lld\n", sum);
        }
    }
    return 0;
}