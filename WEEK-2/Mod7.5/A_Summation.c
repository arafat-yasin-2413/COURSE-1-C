#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int arr[n];
    long long int sum = 0;
    for (int i  = 0 ; i <n; i++)
    {
        
        scanf("%lld",&arr[i]);
        sum += arr[i];
    }


    if(sum < 0)
        printf("%lld\n",-(sum));
    else 
        printf("%lld\n",sum);


    return 0;
}