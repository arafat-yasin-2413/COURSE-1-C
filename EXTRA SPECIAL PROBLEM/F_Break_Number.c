#include <stdio.h>
#include<limits.h>
int main()
{
    /* // // // Main Logig // // //
        int cnt = 0;
        int n = 14;
        while(n%2==0)
        {
            n = n/2;
            cnt++;
        }
        printf("%d\n",cnt);
    */

    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        long long int cnt = 0;
        if (a[i] % 2 != 0)
        {
            b[i] = cnt;
        }
        else if (a[i] % 2 == 0)
        {

            while (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                cnt++;
                b[i] = cnt;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld ", b[i]);
    // }
    // printf("\n");

    long long int mx = INT_MIN;
    for(int i =0; i<n; i++)
    {
        if(b[i] > mx)
        {
            mx = b[i];
        }
    }

    printf("%d\n",mx);


    return 0;
}