#include <stdio.h>
int main()
{
    int n;
    int tiger = 0, pathan = 0;
    scanf("%d", &n);
    while (n--)
    {

        int a, b;
        scanf("%d %d", &a, &b);

        
        if (a > b)
            tiger++;
        else if (b > a)
            pathan++;

        
    }

    if (tiger > pathan)
            printf("Tiger\n");

        else if (pathan > tiger)
            printf("Pathan\n");

        else if (tiger == pathan)
            printf("Draw\n");
    return 0;
}