#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    // continue means skip
    for(int i = 1; i<=n; i++)
    {
        
        if(i % 2 == 0 )
        {
            continue;
        }
        printf("%d ",i);
        
        
        
    }

    return 0;
}