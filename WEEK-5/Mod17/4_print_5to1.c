// #include<stdio.h>
// void fun(int i )
// {
//     if(i == 0)
//         return;
    
//     printf("%d\n",i);
//     fun(i-1);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     fun(n);
    

//     return 0;
// }





#include<stdio.h>

// void fun(int i)
// {
//     if(i>5) return;
//     fun(i+1);
//     printf("%d\n",i);

// }
void fun2(int i)
{
    if(i==0) return;
    printf("%d\n",i);
    fun2(i-1);
}

int main()
{
    // fun(1);
    fun2(5);
    

    return 0;
}