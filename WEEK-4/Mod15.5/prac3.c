#include<stdio.h>
#include<string.h>

void count_odd(int ar[], int sz)
{
    int odd = 0;
    for(int i = 0; i<sz;i++)
    {
        // printf("%d ",ar[i]);
        if(ar[i] % 2 != 0)
        {
            odd++;
        }
    }

    printf("%d\n",odd);
}
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    count_odd(a,n);
    return 0;
}