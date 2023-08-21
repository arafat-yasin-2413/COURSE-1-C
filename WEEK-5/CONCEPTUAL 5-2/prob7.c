#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int al =0, bi =0;
    for(int i = 0; i<n; i++)
    {
        char a,b;
        scanf("%c %c",&a,&b);
        if(a>b)
        {
            al++;
        }
        else if(a<b)
        {
            bi++;
        }
    }

    if(al>bi)
    {
        printf("Alisha\n");
    }

    else if(al<bi)
    {
        printf("Bidisha\n");
    }

    else if (al == bi)
    {
        printf("Draw\n");
    }
    

    return 0;
}