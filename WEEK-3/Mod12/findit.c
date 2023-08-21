#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    
    int x;

    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&x);

    int count[1001]={0};
    for(int i = 0; i<n; i++)
    {
        int val ;
        val = a[i];
        if(val == x)
        {
            count[x]++;
        }

        
    }

    printf("%d\n",count[x]);


    return 0;
}