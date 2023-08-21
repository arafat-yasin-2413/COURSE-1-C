#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        printf("%d ",i);
        
        if(i == 5)
        {
            break;
        }
        // printf("%d ",i);
    }
    

    return 0;
}