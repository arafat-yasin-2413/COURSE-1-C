#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int searchVal;
    scanf("%d",&searchVal);

    int pos = -1;
    for (int i= 0; i<n; i++)
    {
        if(arr[i] == searchVal)
        {
            pos = i;
            break;
        }
    }

    printf("%d\n",pos);

    return 0;
}