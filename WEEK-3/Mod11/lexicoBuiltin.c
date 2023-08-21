#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);

    int val = strcmp(a,b);
    printf("%d\n",val); 

    // if(val < 0)
    // {
    //     printf("A choto\n");
    // }

    // else if (val > 0)
    // {
    //     printf("B choto\n");
    // }

    // else 
    // {
    //     printf("Same\n");
    // }

    return 0;
}