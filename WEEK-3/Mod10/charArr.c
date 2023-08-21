#include<stdio.h>

void printArray(char arr[], int size)
{
    for (int i = 0; i<size; i++)
    {
        printf("%c ",arr[i]);
    }
    printf("\n");
}
int main()
{
    char arr[5];
    for (int i = 0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }

    printArray(arr,5);

    // printf("%d\n",sizeof(arr));

    // int a[5];
    char a[5];
    // printf("%d\n",sizeof(int));
    int sz = sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    

    return 0;
}