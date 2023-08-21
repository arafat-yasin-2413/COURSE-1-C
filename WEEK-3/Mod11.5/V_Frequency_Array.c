
/*  
#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int a[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    int count[100001] ={0};

    for (int i = 0 ; i<n; i++)
    {
        int x = a[i];
        count[x]++;
        
    }

    for(int i = 0; i<=m; i++)
    {
        if(count[i] != 0)
            printf("%d\n",count[i]);
    }
    

    return 0;
}

*/



#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int count[100001] = {0};
    for (int i = 0; i<n; i++)
    {
        int x;
        scanf("%d",&x);

        count[x]++;
    }

    for (int i = 1; i<=m; i++)
    {
        printf("%d\n",count[i]);
    }

    return 0;
}