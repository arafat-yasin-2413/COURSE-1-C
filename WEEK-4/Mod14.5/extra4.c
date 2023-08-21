#include<stdio.h>

//1 return , parameter
char small_to_capital(char ch)
{
    char cap1 = ch -32;
    return cap1;

}


//2 return , no parameter
char small_to_capital2(void)
{
    char ch;
    scanf("%c",&ch);
    char cap2 = ch -32;
    return cap2;

}

//3 no return , parameter
void small_to_capital3(char ch)
{
    
    char cap3 = ch -32;
    printf("%c\n",cap3);

}

//4 no return ,no parameter
void small_to_capital4(void)
{   
    char ch;
    scanf("%c",&ch);

    char cap4 = ch-32;
    printf("%c\n",cap4);
}


int main()
{
    

//1
    // char ch;
    // scanf("%c",&ch);
    // char res = small_to_capital(ch);
    // printf("%c\n",res);

//2
    // char res2 = small_to_capital2();
    // printf("%c\n",res2);


//3
    // char ch;
    // scanf("%c",&ch);
    // small_to_capital3(ch);

//4
    small_to_capital4();




    return 0;
}