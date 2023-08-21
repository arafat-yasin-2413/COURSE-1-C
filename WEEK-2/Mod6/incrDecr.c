#include<stdio.h>
#include<string.h>
int main()
{
    int i = 10;
    
    // int x = i++;
    int x = ++i;

    printf("x-%d, i-%d\n",x,i);
    return 0;
}