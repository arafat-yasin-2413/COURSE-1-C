// https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/search-engine-3

#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1 ; i<=T; i++)
    {

        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int val;
        scanf("%d",&val);
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == val)
            {
                pos = i + 1;
                break;
            }
        }

        // printf("%d\n",pos);
        if (pos == 0)
        {
            printf("Case %d: Not Found\n", i);
        }

        else if (pos != 0)
        {
            printf("Case %d: %d\n", i, pos);
        }
    }
    return 0;
}