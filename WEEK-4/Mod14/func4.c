#include<stdio.h>
#include<string.h>

// no return , no parameter
void summation(void)
{
    int a, b;
    scanf("%d %d",&a,&b);

    int sum = a+b;
    printf("%d\n",sum);
}

int main()
{
    summation();
    

    return 0;
}