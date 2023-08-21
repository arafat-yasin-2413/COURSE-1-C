#include<stdio.h>

void printReverse(int a[],int n,int i)
{
    if(i == n) return;
    printReverse(a,n,i+1);
    printf("%d ",a[i]);


    // if(i == -1) return; 
    // printf("%d ",a[i]);
    // printReverse(a,n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);


    int a[n];
    for(int i = 0; i<n;i++)
        scanf("%d",&a[i]);

    printReverse(a,n,0);
    // printReverse(a,n,n-1);

    return 0;
}