#include<stdio.h>

void printArray(int ar[],int size)
{
    for (int i =  0; i<size; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}

void printReverse(int ar[], int size)
{
    for (int i = size-1 ; i>= 0; i--)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}

int sumOfArray(int arr[], int size)
{
    int sum = 0; 
    for (int i = 0; i<size; i++)
        sum += arr[i];

    return sum; 
}
int main()
{
    // int arr[10] = {0};
    // int arr[10] = {550};
    // printArray(arr,5);


    // int arr[5] = {10,20,30,40,50};
    int n; // এই লাইনের পর অ্যারে ডিক্লেয়ার করা যাবে 
    // int arr[n];        // না। কারণ সাইজ 'n' তো এখনও 
    //ইনপুট ই নিলাম না।
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
    printReverse(arr,n);
    int s = sumOfArray(arr,n);
    printf("%d\n",s);
    return 0;
}