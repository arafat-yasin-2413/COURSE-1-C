#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);
    // printf("%s\n",a);
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        // printf("%d ",a[i]-'0');
        int x = a[i]-'0';
        sum += x;
    }

    printf("%d\n",sum);



    return 0;
}