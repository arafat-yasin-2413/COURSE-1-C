#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if (tk >= 100)
        printf("Burger Khabo\n");
    
    else if(tk >= 50)
        printf("Biscuit Khabo\n");

    else if(tk >= 20)
        printf("Icecream Khabo\n");

    else 
        printf("Kicchui Khabo na ajk\n");

    return 0 ; 
}