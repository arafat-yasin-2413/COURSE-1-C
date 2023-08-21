#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int isPalindrome(char a[])
{
    int len = strlen(a);
    // printf("%d\n",len);


    int isPal = true;
    int i = 0, j = len - 1;
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            isPal = false;
        }
        i++;
        j--;
    }


    // printf("%d\n", isPal);
    return isPal;
}


int main()
{
    char ch[11];
    scanf("%s", ch);


    // printf("%s\n",ch);


    int res = isPalindrome(ch);
    // printf("%d\n",res);
    if(res==1)
    {
        printf("Palindrome\n");
    }


    else
    {
        printf("Not Palindrome\n");
    }


    return 0;
}




// #include<stdio.h>
// #include<string.h>

// //1 has return, parameter
// int summation_of_array_elements(int ar[], int sz)
// {
//     int sum = 0;
//     for(int i = 0; i<sz; i++)  
//         sum += ar[i];


//     return sum;
// }


// int main()
// {

// //1 has return, parameter    
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }


//     int res = 0;
//     res = summation_of_array_elements(a,n);
//     printf("%d\n",res);


//     return 0;
// }





//3
// #include <stdio.h>

// int count_before_zero(int ar[], int sz)
// {
//     int cnt = 0;
//     for (int i = 0; i < sz; i++)
//     {

//         if (ar[i] == 0)
//         {
//             break;
//         }
//         else
//         {
//             cnt++;
//         }
//     }

//     return cnt;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int count = 0;
//     count = count_before_zero(a, n);
//     printf("%d\n", count);

//     return 0;
// }

// 2
//  #include<stdio.h>
//  int main()
//  {
//      int n;
//      scanf("%d",&n);
//      int s=n-1, k = 1;
//      for(int i = 1; i<=n; i++)
//      {
//          for(int j = 1; j<=s; j++)
//          {
//              printf(" ");
//          }
//          for(int j = 1; j<=k; j++)
//          {
//              printf("%d",i);
//          }
//          s--;
//          k++;
//          printf("\n");
//      }
//      return 0;
//  }

// 1
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      scanf("%d", &n);

//     int s = n - 1, k = 1;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d",j);
//         }

//         if (i < n)
//         {
//             s--;
//             k += 2;
//         }

//         else
//         {
//             s++;
//             k -= 2;
//         }
//         printf("\n");
//     }

//     return 0;
// }
