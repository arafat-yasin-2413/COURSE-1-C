#include<stdio.h>
int main()
{
    // https://prnt.sc/JHsJBjk49ArG
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i = 0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        {
            int start = 0;
            int end = i-1;

            int k = start;
            int m = end;
            while(k<m)
            {
                int temp = a[k];
                a[k] = a[m];
                a[m] = temp;

                k++;
                m--;
            }
        }

        
    }

    for(int i = 0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");

    return 0;
}