#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int diff = abs(a - b);
    // printf("%d\n",diff);

    int s = a + b;



    if (s > 1)
    {
        if (diff == 0 || diff == 1)
            printf("YES\n");
        else if (diff > 1)
            printf("NO\n");
    }

    else if(s == 0 || s == 1)
    {
        printf("NO\n");
    }

    return 0;
}