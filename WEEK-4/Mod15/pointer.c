#include<stdio.h>
#include<string.h>
int main()
{
    int x = 100;
    int *p = &x;
    printf("x er address - %d\n",&x);
    printf("pointer er value - %d\n",p);
    printf("pointer er address - %d\n",&p);
    printf("pointer er size - %d\n",sizeof(p));


    return 0;
}