#include<stdio.h>
#include<string.h>
int main()
{
    // int x = 10;
    // printf("address of x - %d\n",&x);

    // int*p = &x;
    // printf("value of pointer p - %d\n",p);
    // printf("value of pointer x - %d\n",*p);
    // printf("address of pointer x - %d\n",&p);


    //  derefferenc
    // int y = 10;
    // int  *p = &y;

    // printf("%d\n",p);
    // printf("%d\n",*p);


    int x = 10;
    int *p = &x;
    *p = 500;

    printf("%d\n",x);

    return 0;
}