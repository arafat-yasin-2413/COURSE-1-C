#include<stdio.h>
int main()
{
    int a[3];
    int b[3];

    for(int i = 0; i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i<3;i++)
    {
        b[i] = a[i];
    }


    int n = 3;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for(int i=0; i<3; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\n");

    for(int i =0; i<3; i++)
    {
        printf("%d\n",b[i]);
    }


    

    return 0;
}