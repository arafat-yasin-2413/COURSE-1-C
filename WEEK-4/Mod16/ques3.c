#include<stdio.h>

int count_before_zero(int ar[], int sz)
{
    int cnt=0;
    for(int i= 0; i<sz; i++)
    {
        
        if(ar[i] == 0)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }

    return cnt;

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

    int count=0;
    count = count_before_zero(a,n);
    printf("%d\n",count);
    

    return 0;
}