#include<stdio.h>

//1 return , parameter
char capital_to_small(char ch)
{
    char small1 = ch +32;
    return small1;

}


//2 return , no parameter
char capital_to_small2(void)
{
    char ch;
    scanf("%c",&ch);
    char small2 = ch +32;
    return small2;

}

//3 no return , parameter
void capital_to_small3(char ch)
{
    
    char small3 = ch +32;
    printf("%c\n",small3);

}

//4 no return ,no parameter
void capital_to_small4(void)
{   
    char ch;
    scanf("%c",&ch);

    char small4 = ch+32;
    printf("%c\n",small4);
}


int main()
{
    

//1
    // char ch;
    // scanf("%c",&ch);
    // char res = capital_to_small(ch);
    // printf("%c\n",res);

//2
    // char res2 = capital_to_small2();
    // printf("%c\n",res2);


//3
    // char ch;
    // scanf("%c",&ch);
    // capital_to_small3(ch);

//4
    capital_to_small4();




    return 0;
}