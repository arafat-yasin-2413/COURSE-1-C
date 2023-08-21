#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {

        char a[101];
        scanf("%s", &a);

        int len = strlen(a);
        // printf("%d\n",len);

        if (len > 10)
        {
            int num = len - 2;
            printf("%c%d%c\n", a[0], num, a[len - 1]);
        }

        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}