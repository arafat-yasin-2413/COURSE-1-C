#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",&a);

    int sz = sizeof(a)/sizeof(char);
    printf("%d\n",sz);

    printf("%s\n",a);

    return 0;
}