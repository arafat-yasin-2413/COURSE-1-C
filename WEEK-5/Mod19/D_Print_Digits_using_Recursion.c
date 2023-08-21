#include <stdio.h>

void fun(int num)
{ // 1234
    if (num == 0)
        return;
    int x = num % 10; // 4
    fun(num / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        if(n==0) 
            printf("0");
        fun(n);
        printf("\n");
    }
    return 0;
}