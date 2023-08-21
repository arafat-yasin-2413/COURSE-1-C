#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int pos = 0, neg = 0, even = 0, odd = 0;
    for (int i = 0; i<n; i++)
    {
        int x;
        scanf("%d",&x);

        if(x > 0)
        {
            pos++;
        }

        if(x < 0)
        {
            neg++;
        }

        if (x % 2 == 0)
        {
            even++;
        }

        if (x % 2 != 0)
        {
            odd++;
        }
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}