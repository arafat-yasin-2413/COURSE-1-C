#include<stdio.h>

void reference(int *ptr)
{
    // this ptr is a pointer
    // ptr pointer is taking the address of variable x. 
    // printf("%d\n",*ptr);
    *ptr = *ptr*5; // 100

    printf("value of pointer - %d\n",ptr);



}



void my_func(int x)
{
    printf("Address of x in my_func - %d\n",&x);
    printf("Copied value from main - %d\n",x);
    
    // now trying to change the value of x
    x= 100;
    printf("After modifying x is - %d\n",x);


}

int main()
{
    // int x=10;
    // printf("x-%d\n",x);
    // printf("Address of x in main - %d\n",&x);
    // my_func(x);
    // printf("Value of x after function call -%d\n",x);


    int x = 20;
    printf("value of x before call - %d\n",x);
    reference(&x);  
    // Sending address of x to the reference function 
    printf("value of x after call - %d\n",x);
    printf("address of x - %d\n",&x);

    

    return 0;
}