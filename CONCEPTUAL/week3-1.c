#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int a[n+1];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //// INSERTION
    // int pos, val;
    // scanf("%d %d",&pos,&val);

    // for(int i = n; i>pos; i--)
    // {
    //     a[i] = a[i-1];
    // }

    // a[pos] = val;

    // for(int i = 0; i<=n; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    //// DELETION
    // int delPos;
    // scanf("%d",&delPos);

    // for(int i = delPos; i<n-1; i++)
    // {
    //     a[i] = a[i+1];
    // }

    // for(int i = 0; i<n-1; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    //// SUM And UPDATE
    // int query;
    // scanf("%d", &query);
    // while (query--)
    // {
    //     int idx, val;
    //     scanf("%d %d", &idx, &val);

    //     a[idx] += val;
    // }


    // for(int i = 0; i<n; i++)
    // {
    //     printf("%d ",a[i]);
    // }


    //// Swap
    int Q;
    scanf("%d",&Q);
    while(Q--)
    {
        int L,R;
        scanf("%d %d",&L,&R);


        int temp = a[L];
        a[L] = a[R];
        a[R] = temp;
    }


    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }




    return 0;
}
