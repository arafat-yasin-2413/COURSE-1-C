#include<stdio.h>
#include<string.h>

int my_abs(int n)
{
    if(n<0)
    {
        return -n;
    }

    else 
    {
        return n;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int res = my_abs(n);
    printf("%d\n",res);


    return 0;
}