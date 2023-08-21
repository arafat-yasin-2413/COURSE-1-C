#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int s = n-1, k=1;

    for(int i = 1; i<= 2*n-1; i++)
    {
        for(int j = 1; j<=s; j++)
        {
            printf(" ");
        }


        for(int j = 1; j<=k; j++)
        {
            printf("*");
        }

        if(i<=n-1)
        {
            s--;
            k+=2;
        }

        else 
        {
            s++;
            k-=2;
        }

        printf("\n");
    }

    return 0;
}
























// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n,k;
//     scanf("%d",&n);


//     // k = 1;
//     // //k হচ্ছে আমার প্রতিটা লাইনে কয়টা সংখ্যা আছে সেটা

//     // for(int i = 1; i<=n; i++)
//     // {
//     //     // line print
//     //     for(int j =1 ; j<=k; j++)
//     //     {
//     //         // 1 theke k porjonto
//     //         printf("%d ",j);
//     //     }
//     //     k++;

//     //     printf("\n");
//     // }


//     k = n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=k; j++)
//         {
//             printf("%d ",j);
//         }

//         k--;
//         printf("\n");
//     }

//     return 0;
// }






































///2
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);

//     // s=n-1, k=1;
//     // for(int i = 1; i<=n; i++)
//     // {
//     //     for(int j = 1; j<=s ; j++)
//     //     {
//     //         printf(" ");
//     //     }

//     //     for(int j = 1; j<=k; j++)
//     //     {
//     //         printf("*");
//     //     }
//     //     s--;
//     //     k+=2;
        
//     //     printf("\n");
//     // }

//     s =  0, k = 2*n -1;
//     for(int i = 1;i<=n; i++)
//     {
//         for(int j = 1; j<=s; j++)
//         {
//             printf(" ");
//         }
//         for(int j = 1; j<=k; j++)
//         {
//             printf("*");
//         }
//         s++;
//         k-=2;

//         printf("\n");
//     }

//     return 0;
// }







///1
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int n,k;
//     scanf("%d",&n);

//     // k =1;
//     // for(int i = 1; i<=n;  i++)
//     // {
        
//     //     // printf("kaj\n");
//     //     for(int j = 1; j<=k ; j++)
//     //     {
            
//     //         printf("*");
//     //         // printf("i=%d,j=%d,k=%d\n",i,j,k); 

//     //     }
//     //     k++;
//     //     printf("\n");
//     // }
    

//     k = n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=k; j++)
//         {
//             printf("*");
//         }
//         k--;

//         printf("\n");
//     }

    

//     return 0;
// }