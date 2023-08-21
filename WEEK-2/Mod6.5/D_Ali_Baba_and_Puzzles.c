#include<stdio.h>
int main()
{
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    long long int r1 =0, r2 = 0,
                r3 = 0, r4 = 0,
                r5 = 0, r6 = 0; 
    
    r1 = a + (b * c);
    r2 = a + b - c;

    r3 = a - b + c;
    r4 = a - (b * c);

    r5 = (a * b) + c;
    r6 = (a * b) - c;

    // printf("\n");
    // printf("%lld\n",r1);
    // printf("%lld\n",r2);
    // printf("%lld\n",r3);
    // printf("%lld\n",r4);
    // printf("%lld\n",r5);
    // printf("%lld\n",r6);


    if( (r1 == d) || (r2 == d) ||
        (r3 == d) || (r4 == d) ||
        (r5 == d) || (r6 == d) )
    {
        printf("YES\n");
    }

    else 
    {
        printf("NO\n");
    }
    


    return 0;
}


// Katryoshka
// #include<stdio.h>
// int main()
// {
//     // লুপ চালানোই যাবে না
//     // লুপ ১ সেকেন্ডে 10^9 অপারেশন করতে পারে।
//     long long int e , m , b, res = 0;
//     scanf("%lld %lld %lld %lld",&e,&m, &b);

//     if (e == 0 || b == 0)
//     {
//         printf("0\n");
//     } 

//     else 
//     {
//         long long int min= e;
//         if(m < min)
//             min = m;

//         if (b < min)
//             min = b;

//         e = e - min;
//         m = m - min;
//         b = b - min;

//         res += min;

//         if (e/2 < b)
//             res += e/2;
        
//         else 
//             res += b;
//     }

//     return 0;
// }