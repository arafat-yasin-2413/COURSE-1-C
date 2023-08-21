#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    // int min = arr[0];
    // for (int i = 1; i<n; i++)
    // {
    //     if(arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }

    // // printf("%d\n",min);

    // int pos = -1;
    // for (int i = 0 ;i<n; i++)
    // {
    //     if(arr[i] == min)
    //     {
    //         pos = i;
    //         break;
    //     }
    // }

    // printf("%d %d\n",min,pos+1);

    int mn = INT_MAX;
    int position ;
    // printf("%d\n",mn);
    for (int i  = 0; i<n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            position = i+1;
        }
    }

    printf("%d %d\n",mn,position);
    return 0;
}