#include<stdio.h>
#include<string.h>
int main()
{
    // long long int eye, mouth, body;
    // scanf("%lld %lld %lld",&eye,&mouth,&body);

    // long long int cnt = 0;

    // if(eye == 0 || body == 0)
    // {
    //     printf("0\n");
    // }

    // else 
    // {
    //     long long mn = eye;

    //     if(mouth < mn)
    //     {
    //         mn = mouth;
    //     }

    //     if(body < mn)
    //     {
    //         mn = body;
    //     }

    //     eye -= mn;
    //     mouth -=mn;
    //     body -= mn;

    //     cnt += mn;

    //     if(eye / 2 < body)
    //     {
    //         cnt += (eye/2);
    //     }

    //     else 
    //     {
    //         cnt += body;
    //     }
    //     printf("%lld\n",cnt);
    // }

    // for (int i=97; i<=122;i++)
    // {
    //     printf("%c",i);
    // }

    int n;
    int sum1 =0, sum2 = 0;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);

        if(x%2==0)
        {
            sum1+=x;
        }   

        else if(x % 3 == 0)
        {
            sum2+=x;
        }
    }

    printf("%d %d\n",sum1,sum2);

    

    return 0;
}