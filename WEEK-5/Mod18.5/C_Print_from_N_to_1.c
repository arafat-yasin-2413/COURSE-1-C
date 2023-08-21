#include<stdio.h>
void fun(int num)
{
    if(num == 0) return;
    if(num!=1)
        printf("%d ",num);
    else if(num == 1)
        printf("%d",num);
    fun(num-1);
}
int main()
{
    int n;
    scanf("%d",&n);

    fun(n);

    return 0;
}