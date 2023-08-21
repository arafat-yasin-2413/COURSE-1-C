#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);

    int capital = 0, small = 0;
    for (int i = 0; i<strlen(a); i++)
    {
        if(a[i] >= 'A' && a[i] <='Z')
        {
            capital++;
        }
        else 
            small++;
    }

    printf("%d %d\n",capital,small);

    return 0;
}