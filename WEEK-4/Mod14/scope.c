#include<stdio.h>
#include<string.h>

int x = 500;



void fun()
{
    // int s = 100;
    // printf("Address of s in fun function - %p\n",&s);
    printf("x is - %d\n",x);

    printf("fun er x er address - %p\n",&x);
}

int main()
{
    // int s = 200;
    // printf("Address of s in main function - %p\n",&s);
    // fun();
    // printf("%d\n",s);

    printf("x before call - %d\n",x);
    fun();
    printf("Main er x er address - %p\n",&x);
    
    

    return 0;
}