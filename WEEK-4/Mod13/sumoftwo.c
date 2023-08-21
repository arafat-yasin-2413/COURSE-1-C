#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    bool isTrue = false;
    int x;
    scanf("%d",&x);

    for (int i = 0; i<n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            int add = a[i] + a[j];
            if(add == x)
            {
                isTrue = true;
            }
            
        
        }
    }

    // printf("%d\n",isTrue);
    if(isTrue == true)
    {
        printf("possible\n");
    }

    else 
    {
        printf("not possible\n");
    }

    return 0;
}