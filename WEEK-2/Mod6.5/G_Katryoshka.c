#include<stdio.h>

long long int findMin(long long int a, long long int b, 
long long int c)
{
    if(a < b && a < c)
        return a;
    
    else if ( b < a && b < c)
        return b;

    else 
        return c;
}

int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld",&n,&m,&k);



    long long int mn = findMin(n,m,k);
    // printf("%lld\n",mn);
    
    long long int bodyCount  = 0;
    bodyCount += mn;

    n = n - mn;
    m = m - mn;
    k = k - mn;

    long long int temp = n/2;

    if(temp < k)
        mn = temp;
    else 
        mn = k;
    
    bodyCount += mn;

    printf("%lld\n",bodyCount);

    

    



    return 0;
}