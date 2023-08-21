#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);

    int len = strlen(a);
    bool isPalindrome = true;
    

    for(int i = 0, j = len-1; i<len/2, j>=len/2; i++,j--)
    {
        if(a[i] != a[j])
        {
            isPalindrome = false;
        }
    }

    if(isPalindrome) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}