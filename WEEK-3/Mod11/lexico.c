
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s%s",a,b);

    int i = 0;

    while(1)
    {
        // null checking ladder starts here
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }

        else if( a[i] == '\0')
        {
            printf("A choto\n");
            break;
        }

        else if (b[i] =='\0')
        {
            printf("B choto\n");
            break;
        }

        // null checking ladder ends here

        // if same character appears, then 
        // move forward
        if(a[i] == b[i])
        {
            i++;
        }

        // if different character , then 
        // compare among them
        else if (a[i] < b[i])
        {
            printf("A Choto\n");
            break;
        }
        
        else
        {
            printf("B choto\n");
            break;
        }
    }

    return 0;
}
  */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s%s",a,b);

    int x= strcmp(a,b);
    printf("%d\n",x);


    // int i = 0;
    // while(1)
    // {
    //     if(a[i] == b[i])
    //     {
    //         i++;
    //     }

    //     else if(a[i] < b[i])
    //     {
    //         printf("A choto\n");
    //         break;
    //     }

    //     else 
    //     {
    //         printf("B choto\n");
    //         break;
    //     }


    //     if(a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same \n");
    //         break;
    //     }

    //     else if(a[i] == '\0')
    //     {
    //         printf("A choto \n");
    //         break;
    //     }

    //     else if(b[i] == '\0')
    //     {
    //         printf("B choto \n");
    //         break;
    //     }
    // }
    return 0;
}