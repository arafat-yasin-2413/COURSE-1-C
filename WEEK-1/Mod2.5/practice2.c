// 01 May 2023
#include<stdio.h>
#include<string.h>
int main()
{
//// 1
    // printf("Recently I heard that you've achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you'll shine in your life!\tGood luck with all the barriers(/\\) in your life.");


///2
    // int a, b;
    // scanf("%d %d",&a,&b);

    // printf("%d + %d = %d\n",a,b,a+b);
    // printf("%d - %d = %d\n",a,b,a-b);
    // printf("%d * %d = %d\n",a,b,a*b);
    // float div = a*1.0/b*1.0;
    // printf("%d / %d = %0.2f\n",a,b,div);

//5
    int tk;
    scanf("%d",&tk);

    if(tk >= 10000)
    {
        printf("Gucci bag\n");
        if(tk > 20000)
        {
            printf("Gucci belt\n");
        }

    }

    else if(tk >= 5000)
    {
        printf("Levis bag\n");
    }

    else 
    {
        printf("Something from new market\n");
    }

    return 0;
}