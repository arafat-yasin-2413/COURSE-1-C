#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);

    int cnt = 0;
    
    // int i = 0;
    // while(a[i] != '\0')
    // {
    //     cnt++;
    //     i++;
    // }

    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     cnt++;
    // }

    // printf("%d\n",cnt);

    int len = strlen(a);
    printf("%d\n",len);

    return 0;
}