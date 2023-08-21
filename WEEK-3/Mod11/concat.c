#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s%s",a,b);

    int len1 = strlen(a);
    
    
    int k = len1;
    a[k] = ' ';
    k = len1 + 1;
    for (int i = 0; i<=strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }

    printf("%s\n",a);
    printf("%s\n",b);

    return 0;
}