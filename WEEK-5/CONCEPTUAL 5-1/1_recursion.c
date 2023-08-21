#include<stdio.h>

void fun(int num)
{
    if(num == 0) return;
    fun(--num);
    printf("I love Recursion\n");
    
}

int main()
{
    int num;
    scanf("%d",&num);

    fun(num);

    return 0;
}