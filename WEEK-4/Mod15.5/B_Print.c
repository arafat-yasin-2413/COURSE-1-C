#include<stdio.h>
void printfrom1ton(int a)
{
    int i = 1;
    for( i = 1; i<a; i++)
    {   
        printf("%d ",i);
    }
    printf("%d",i);

}
int main()
{
    int a;
    scanf("%d",&a);

    printfrom1ton(a);

    return 0;
}