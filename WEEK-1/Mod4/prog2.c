#include<stdio.h>
int main()
{
    // double a, b;
    // scanf("%lf %lf",&a,&b);

    // double mult = a*b;
    // printf("%.0lf",mult);

    // int n; 
    // scanf("%d",&n);
    // if(n %3 == 0)
    //     printf("YES");
    // else 
    //     printf("NO");   

    // int n;
    // scanf("%d",&n);

    // for (int i = 21; i<=n; i++)
    // {
    //     if(i %3 == 0 && i %7 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    int tk;
    scanf("%d",&tk);


    if(tk > 1000)
    {
        printf("I will buy Punjabi\n");
        int rem = tk-1000;
        if(rem >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisha will buy new shoes\n");
        }
    }

    else 
    {
        printf("Bad Luck!\n");
    }


    return 0; 
}