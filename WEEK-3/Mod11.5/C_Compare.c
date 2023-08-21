


#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    scanf("%s%s",a,b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int mn = INT_MAX;
    if(len_a < mn)
        mn = len_a;
    if(len_b <mn) 
        mn = len_b;

    // printf("%d\n",mn);

    bool isSmall =0;
    for (int i = 0; i<mn; i++)
    {
        if(a[i] < b[i])
        {
            printf("%s\n",a);
            isSmall = 1;
            break;
        }

        if(b[i] < a[i])
        {
            printf("%s\n",b);
            isSmall = 1;
            break;
        }


    }

    if(isSmall == 0)
    {
        if(len_a == len_b)
        {
            printf("%s\n",a);
        }

        else if(len_a < len_b)
        {
            printf("%s\n",a);
        }
        else if(len_b < len_a)
        {
            printf("%s\n",b);
        }
    }

    

    return 0;
}