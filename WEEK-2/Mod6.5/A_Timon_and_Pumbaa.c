#include<stdio.h>
int main()
{
    int a , b ;
    scanf("%d %d",&a,&b);

    int diff = a-b;

    if (diff >= 0)
    {
        printf("%d\n",diff);
    }

    else 
    {
        printf("0\n");
    }

    return 0;
}