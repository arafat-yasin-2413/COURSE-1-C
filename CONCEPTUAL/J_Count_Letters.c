#include<stdio.h>
#include<string.h>
int main()
{
    
    int a[26]={0};
    char ch;
    while(scanf("%c",&ch) != EOF)
    {
        a[ch-'a']++;
    }

    for(char i = 'a' ; i<='z'; i++)
    {
        printf("%c : %d\n",i,a[i-'a']);
    }


    return 0;
}