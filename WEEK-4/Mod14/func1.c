#include<stdio.h>
#include<string.h>

int summation(int x,int y)
{
    return -2; //যোগ করার আগেই -২ রিটার্ন করা হয়েছে
    int sum = x+y;
    // return sum;
}

int main()
{
    // printf("%d\n",summation(10,22));
    // printf("%d\n",summation(15,12));
    // printf("%d\n",summation(44,6));
    int res = summation(55,50);
    printf("%d\n",res);

    return 0;
}


