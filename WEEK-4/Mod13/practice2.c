// #include<stdio.h>
// int main()
// {
// int x;
// scanf("%d",&x);
// for(int i = 1; i<=x ; i++)
// {
//     // printf("%d ",i);
//     printf("Why delaying 10 seconds?\n");
// }







//4
    #include<stdio.h>
    int main()
    {
        int n;  
        scanf("%d",&n);

        int s=n-1,k=1;
        for(int i= 1; i<=2*n-1; i++)
        {
            for(int j = 1; j<=s; j++)
            {
                printf(" ");
            }

            for(int j = 1; j<=k; j++)
            {
                printf("*");
            }

            if(i<n)
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










//3
    // #include<stdio.h>
    // int main()
    // {
    //     int n, k =1;
    //     scanf("%d",&n);

    //     for(int i= 1; i<=n; i++)
    //     {
    //         for(int j = 1; j<=k; j++)
    //         {
    //             printf("%d ",j);
    //         }
    //         k++;
    //         printf("\n");
    //     }
        
    
    //     return 0;
    // }
















//2
    // #include<stdio.h>
    // int main()
    // {
    //     int n;
    //     scanf("%d",&n);
    //     int s=n-1,k=1;

    //     for(int i = 1; i<=n; i++)
    //     {
    //         for(int j = 1; j<=s; j++)
    //         {
    //             printf(" ");
    //         }

    //         for(int j = 1; j<=k; j++)
    //         {
    //             printf("*");
    //         }
    //         s--;
    //         k+=2;
    //         printf("\n");
    //     }
    
    //     return 0;
    // }

















//1
    // int n,k=1;
    // scanf("%d",&n);


    // for(int i = 1; i<=n;i++)
    // {
    //     for(int j = 1; j<=k; j++)
    //     {
    //         // printf("i - %d, j = %d\n",i,j);
    //         printf("*");
    //     }
    //     k++;
    //     printf("\n");
    // }

    // return 0;
    // }