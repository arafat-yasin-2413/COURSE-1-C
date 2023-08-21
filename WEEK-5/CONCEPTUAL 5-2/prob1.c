#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    char b, c, d;

    scanf("%s %c %c %c",a,&b,&c,&d);
    // printf("%s\n",a);
    // printf("%c\n",b);
    // printf("%c\n",c);
    // printf("%c\n",d);

    for(int i = 0; i<strlen(a); i++)
    {
        if(a[i] != b && 
        a[i] != c &&
        a[i] != d)
        {
            printf("%c\n",a[i]);
        }
    }
    

    return 0;
}