#include<stdio.h>
#include<string.h>
int main()
{
    // 'fgets' , enter input ney
    // but 'scanf' ba 'gets', enter input ney na

    // char a[18];
    // gets(a);
    
    char a[18];
    fgets(a,6,stdin);
    printf("%s\n",a);

    return 0;
}