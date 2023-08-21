#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i<n; i++)
    {
        int x ;
        scanf("%d",&x);

        if(x % 2 == 0)
        {
            evenSum += x;
        }

        if(x % 2 != 0)
        {
            oddSum += x;
        }
    }

    printf("%d %d\n",evenSum,oddSum);

    return 0;
}