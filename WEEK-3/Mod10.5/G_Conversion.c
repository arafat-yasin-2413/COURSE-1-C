#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",&a);
    // printf("%s\n",a);
    int len = strlen(a);
    for (int i = 0; i<len ; i++)
    {
        if(a[i] == ',')
        {
            a[i] = ' ';
        }

        else if(a[i] >= 'a' && a[i]<='z')
        {
            a[i] -= 32; 
        }

        else if(a[i] >='A' && a[i] <= 'Z')
        {
            a[i] +=32;
        }
    }

    printf("%s\n",a);
    

    return 0;
}