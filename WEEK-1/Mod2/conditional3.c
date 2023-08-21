#include<stdio.h>
#include<string.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        
        tk = tk-5000;
        if(tk >= 10000)
        {
            printf("Saint Martin jabo\n");

        }
        else 
        {
            printf("Ferot chole ashbo\n");
        }
    }

    else 
    {
        printf("kotthau jabo na\n");
    }

    return 0;
}