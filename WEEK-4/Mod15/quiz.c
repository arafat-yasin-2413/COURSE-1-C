
#include<stdio.h>
#include<string.h>
int main()
{
    for (int i = 1; i<=10; i++)
    {
        int j= i; 
        printf("%d ",j);
    }

    return 0;
}

// #include <stdio.h>
//     int main()
//     {
//         int ary[4] = {1, 2, 3, 4};
//         int *p;
//         p = ary + 3;
//         *p = 5;
//         printf("%d\n", ary[3]);
//     }



// #include <stdio.h>
//     int main()
//     {
//         int ary[4] = {1, 2, 3, 4};
//         printf("%d\n", *ary);
//     }



// #include <stdio.h>
//     void m(int p, int q)
//     {
//         int temp = p;
//         p = q;
//         q = temp;
//     }
//     void main()
//     {
//         int a = 6, b = 5;
//         m(a, b);
//         printf("%d %d\n", a, b);
//     }


















//  #include <stdio.h>
//     void m(int *p)
//     {
//         int i = 0;
//         for(i = 0;i < 5; i++)
//         printf("%d\t", p[i]);
//     }
//     void main()
//     {
//         int a[5] = {6, 5, 3};
//         m(&a);
//     }




// #include <stdio.h>
//     void swap(int *p, int *q)
//     {
//         int temp = *p; *p = *q; *q = temp;
//     }
//     void main()
//     {
//         int a = 6, b = 5;
//         swap(&a, &b);
//         printf("%d %d\n", a, b);
//     }