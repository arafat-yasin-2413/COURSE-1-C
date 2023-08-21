#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int mult = b*c*d;
    int res = a/mult;
    printf("%d\n",res);

    return 0;
}