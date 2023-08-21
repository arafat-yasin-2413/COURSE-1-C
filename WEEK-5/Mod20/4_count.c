#include<stdio.h>
#include<string.h>
int main()
{
    char a[1002];
    fgets(a,1002,stdin);
    // printf("%s\n",&a);
    int len = strlen(a);

    int cap=0,small=0,space=0;
    for(int i = 0 ; i<len; i++)
    {
        if(a[i] >='A' && a[i] <='Z')
        {
            cap++;
        }

        else if(a[i] >='a' && a[i] <= 'z')
        {
            small++;
        }

        else if(a[i]==' ')
        {
            space++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d",cap,small,space);

    return 0;
}