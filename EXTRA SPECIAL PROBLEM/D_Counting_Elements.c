#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    // for(int i= 0; i<n-1; i++)
    // {
    //     for(int j = i+i; j<n; j++)
    //     {
    //         if(a[i] >= a[j])
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    int cnt=0;
    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            // printf("i- %d, j- %d\n",i,j);
            if(j==i)
            {
                // printf("i- %d, j- %d\n",i,j);
                continue;
            }

            if(a[i]+1 == a[j])
            {
                // printf("i- %d, j- %d\n",i,j);
                cnt++;
                break;
            }

            
        }
    }
    

    // printf("%d\n",cnt);

    return 0;
}