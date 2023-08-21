#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s",a);
    scanf("%s",b);

    int len1 = strlen(a);
    int len2 = strlen(b);
    printf("%d %d\n",len1,len2);

    printf("%s %s\n",a,b);

    return 0;
}