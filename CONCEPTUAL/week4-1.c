#include<stdio.h>
#include<string.h>

void solveProblem(void)
{
    int key;
    scanf("%d",&key);

    int a[5];
    for(int i = 1; i<=3; i++)
    {
        scanf("%d",a[i]);
    }


    if(a[key] == 0)
    {
        printf("NO\n");
        
    }

    key = a[key];

    if(a[key] == 0)
    {
        printf("NO\n");
    }

}

int main()
{
    
    // int test;
    // scanf("%d",&test);

    // while (test--)
    // {
    //     solveProblem();
    // }
    

    


    return 0;
}