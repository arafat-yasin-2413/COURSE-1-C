#include<stdio.h>
long long int sum = 0;
long long int fun(int a[], int n)
{  
    if(n<0) return 0;
 
    sum += a[n];
    fun(a,n-1);
    return sum;

}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)  
        scanf("%d",&a[i]);

    long long int res =fun(a,n-1);
    printf("%lld",res);    

    return 0;
}