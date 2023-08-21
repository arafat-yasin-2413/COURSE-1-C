#include<stdio.h>
int main()
{
    // 1 2 3 15 10 7 9
    int n;
    scanf("%d",&n);

    // int a[n];
    // for(int i = 0; i<n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }

    int even = 0, odd = 0, div = 0;
    // for(int i = 0; i<n; i++)
    // {
    //     if(a[i] %2 == 0)
    //         even++;

    //     else if(a[i] % 2 != 0)
    //         odd++;

    //     if(a[i] % 3 == 0 && a[i] % 5 == 0)
    //         div++;

    // }

    for(int i = 0; i<n; i++)
    {
        int x;
        scanf("%d",&x);

        if(x % 2 == 0)
            even++;

        else 
            odd++;

        if(x % 3 == 0 && x % 5 == 0)
            div++;
    }

    printf("Even - %d\nOdd - %d\nthree&five - %d\n",even,odd,div);

    return 0;
}