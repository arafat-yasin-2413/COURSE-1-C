#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);

    int vowels = 0;
    for(int i = 0; i<strlen(a); i++)
    {
        char x;
        x = a[i];
        if(x == 'a' || x == 'e' || x == 'i'
        || x == 'o' || x == 'u')
        {
            vowels++;
        }
    }

    printf("%d\n",vowels);
    return 0;
}