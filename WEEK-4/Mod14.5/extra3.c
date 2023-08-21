#include<stdio.h>

//1 return , parameter
int char_to_ascii(char ch)
{
    int val = ch;
    return val;

}


//2 return , no parameter
int char_to_ascii2()
{
    char ch;
    scanf("%c",&ch);

    int ascVal = ch;
    return ascVal;
}


//3 no return , parameter
void char_to_ascii3(char ch)
{
    int res3 = ch;
    printf("%d\n",res3);
}

//4 no return ,no parameter
void char_to_ascii4(void)
{   
    char ch;
    scanf("%c",&ch);

    int res4 = ch;
    printf("%d\n",res4);
}


int main()
{
    

//1
    // char ch;
    // scanf("%c",&ch);
    // int res = char_to_ascii(ch);
    // printf("%d\n",res);

//2
    // int res2 = char_to_ascii2();
    // printf("%d\n",res2);


//3
    // char ch;
    // scanf("%c",&ch);
    // char_to_ascii3(ch);

//4
    char_to_ascii4();




    return 0;
}