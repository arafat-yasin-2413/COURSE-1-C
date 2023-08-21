#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);

    while (test--)
    {
        int a, b;
        scanf("%d %d",&a,&b);

        if(a==b)    
            printf("Square\n");
        else 
            printf("Rectangle\n");
    }
    

    return 0;
}