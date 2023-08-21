#include<stdio.h>

void fun(int n)
{
    if(n==0) return;
    fun(n-1);
    printf("%d\n",n);
}

int main()
{
    int num ;
    scanf("%d",&num);
    // printf("\n");

    fun(num);
    

    return 0;
}