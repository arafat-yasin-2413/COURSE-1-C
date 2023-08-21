#include<stdio.h>

void fun(void)
{
    printf("fun\n");
    fun();
}
int main()
{
    fun();

    return 0;
}