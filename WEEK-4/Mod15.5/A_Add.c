#include<stdio.h>
int summation(int a, int b)
{
    int s = a+b;
    return s;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int res = summation(a,b);
    printf("%d\n",res);

    return 0;
}