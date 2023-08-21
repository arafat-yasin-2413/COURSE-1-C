#include<stdio.h>
#include<string.h>

void swap_it(int *x,int *y)
{
    int temp = *x;
    // printf("%d\n",temp);
    *x = *y;
    *y = temp;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    swap_it(&a,&b);

    printf("%d %d\n",a,b);



    return 0;
}