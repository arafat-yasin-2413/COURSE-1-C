#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int dg1 = 0, dg2 = 0;

    
        int rem = n % 10;
        dg1 = rem;
        n = n/10;
        dg2 = n;
    

    // printf("%d %d\n",dg1, dg2);
    if( (dg1 % dg2 == 0) ||
        (dg2 % dg1 == 0) )

    {
        printf("YES\n");
    }

    else 
    {
        printf("NO\n");
    }
    return 0;
}