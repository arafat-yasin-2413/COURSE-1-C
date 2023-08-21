#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
    // space printing
        for(int j = n-i; j>=0; j--)
        {
            printf(" ");
        }

    // others printing
        for(int j = 1;j<=2*i-1; j++)
        {
            if(i%2 != 0)
                printf("#");
            else 
                printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}