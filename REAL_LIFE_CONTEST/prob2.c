// https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/triangle-31-1

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==0 || b == 0 || c == 0)
        printf("No\n");

    else if(a==b && b==c)
        printf("Yes\n");

    else 
        printf("No\n");
    

    return 0;
}