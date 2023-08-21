#include<stdio.h>

int stringLength(char a[],int i)
{
    if(a[i] == '\0') return 0;
    int len = stringLength(a,i+1);
    return len+1;


}
int main()
{
    char a[10] = "hello";

    int l = stringLength(a,0);
    printf("%d\n",l);
    

    return 0;
}


