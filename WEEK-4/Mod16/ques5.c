#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int isPalindrome(char a[])
{
    int len = strlen(a);
    // printf("%d\n",len);

    int isPal = true;
    int i = 0, j = len - 1;
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            isPal = false;
        }
        i++;
        j--;
    }

    // printf("%d\n", isPal);
    return isPal;
}

int main()
{
    char ch[11];
    scanf("%s", ch);

    // printf("%s\n",ch);

    int res = isPalindrome(ch);
    // printf("%d\n",res);
    if(res==1)
    {
        printf("Palindrome\n");
    }

    else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}