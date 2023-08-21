#include <stdio.h>
#include <string.h>

int fun(char s[], int i)
{
    if (s[i] == '\0')
        return 0;

    int ans = fun(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] += 32;
    }
    if (s[i] == 'a' || s[i] == 'e' ||
        s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u')
    {
        return ans + 1;
    }

    else
    {
        return ans;
    }
}

int main()
{
    char a[202];
    fgets(a, 202, stdin);
    // printf("%s",a);

    int len = strlen(a);
    // printf("%d\n",len);

    
    int cnt = fun(a, 0);
    printf("%d\n", cnt);

    return 0;
}