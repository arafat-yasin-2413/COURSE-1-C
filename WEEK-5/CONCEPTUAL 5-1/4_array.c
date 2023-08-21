#include<stdio.h>

void fun(int a[], int sz)
{
    if(sz < 0) return;
    
    printf("%d ",a[sz]);
    fun(a,sz-1);
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i= 0; i<n; i++) scanf("%d",&a[i]);

    fun(a,n-1);



    return 0;
}