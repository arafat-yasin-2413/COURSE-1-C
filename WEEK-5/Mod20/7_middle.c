#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // for(int i = 0;i<n; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    if(n % 2 == 0)
    {
        int left = (n/2)-1;
        int right = ((n/2)+1)-1;

        printf("%d %d\n",a[left],a[right]);
    }

    else if(n % 2 != 0)
    {
        int pos = ((n+1)/2)-1;
        printf("%d\n",a[pos]);
    }
    return 0;
}