/*
Date : 03 April 2023


*/

///*
// problem 5 : if else

#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 10000)
    {
        printf("Gucci Bag\n");
        if (tk > 20000)
        {
            printf("Gucci Belt\n");
        }
    }

    else if (tk >= 5000)
    {
        printf("Levis Bag\n");
    }

    else
    {
        printf("Something\n");
    }

    return 0;
}

//*/


//*****************************************************
/*
//problem 4 : positive, negative or zero

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n == 0)
        printf("zero\n");
    else if (n > 0)
        printf("positive\n");
    else if(n < 0)
        printf("negative\n");



    return 0;
}

*/
//*****************************************************


//*****************************************************
/*
//problem 3 : even or odd

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2 == 0)
        printf("even\n");
    else
        printf("odd\n");



    return 0;
}

*/
//*****************************************************


//*****************************************************
/*
//problem 2 : arithmetic

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    float division = (float)a/b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mult);
    printf("%d / %d = %.2f\n",a,b,division);

    return 0;
}

*/
//*****************************************************


//*****************************************************
/*
//problem 1 : just print

#include<stdio.h>
int main()
{
    printf("Recently I heard that you've achieved 95%% marks in your exam. \nThis is brilliant! \nI wish you'll shine in your life!\tGood luck with all the barriers(/\\) in your life.\n");

    return 0;
}

*/

//*****************************************************