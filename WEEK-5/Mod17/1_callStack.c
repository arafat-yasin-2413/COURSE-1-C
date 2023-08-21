#include<stdio.h>

void hello(void);
void world(void);

void hello(void)
{
    printf("Hello starts\n");
    world();
    printf("Hello ends\n");

}

void world(void)
{
    printf("World starts\n");
    printf("World ends\n");
}

int main()
{
    printf("Main Start\n");
    hello();
    printf("End\n");

    return 0;
}








