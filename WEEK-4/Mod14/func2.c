#include<stdio.h>
#include<string.h>

int summation(void)
{
    int a, b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
}

int main()
{
    int res = summation();
    // int res = summation(1000);
    
    // এই ফাংশন প্যারামিটার দিলে সে নরম্যালি ইগ্নোর করবে।
    // কিন্তু ঠিকমত রান হয়ে ইনপুট নিয়ে আউটপুট দিবে। (15)
    
    // ... এখন আমি যদি ফাংশনের প্যারামিটারের জায়গায় 
    // 'void' লিখি তাহলে মেইন ফাংশন থেকে কল করার সময়
    // আমি জোরপূর্বক এটাকে কোনো প্যারামিটার দিয়ে রান 
    // করতে পারবো না। কম্পাইলার আমাকে বাধা দিবে। (4)

    printf("%d\n",res);

    // printf("%d\n",summation());
    

    return 0;
}