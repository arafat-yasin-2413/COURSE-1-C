#include<stdio.h>
#include<string.h>

int my_len(char *ch)
{
    int i = 0;
    int cnt=0; 
    while(ch[i] != '\0')
    {
        cnt++;
        i++;
    }

    return cnt;
}
int main()
{
    char a[100];
    scanf("%s",&a);

    int res = my_len(a);
    printf("%d\n",res);
    

    return 0;
}