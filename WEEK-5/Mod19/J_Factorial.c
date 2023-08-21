#include<stdio.h>

long long int fun(int num)
{
    if(num == 0) return 1;
    long long int ans = fun(num-1);
    ans = ans * num;

    return ans;
}

int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int res = fun(n);
    printf("%lld\n",res);


    return 0;
}