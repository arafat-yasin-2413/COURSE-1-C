#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);

    int count[26]={0};
    for(int i = 0; i<strlen(a); i++)
    {
        char x;
        x = a[i];
        count[x-'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        printf("%c - %d\n",i+'a',count[i]);
    }
    

    return 0;
}