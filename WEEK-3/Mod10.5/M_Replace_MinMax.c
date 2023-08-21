#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i= 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int mx = a[0];
    int mxPos = 0;
    for (int i = 1;  i<n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
            mxPos = i;
        }
    }

    // printf("%d %d \n",mx,mxPos);


    int mn = a[0];
    int mnPos = 0;
    for (int i = 1;  i<n; i++)
    {
        if(a[i] < mn)
        {
            mn = a[i];
            mnPos = i;
        }
    }

    // printf("%d %d \n",mn,mnPos);

    a[mnPos] = mx;
    a[mxPos] = mn;

    for (int i = 0;  i<n; i++)
        printf("%d ",a[i]);

    return 0;
}