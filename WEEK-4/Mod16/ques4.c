#include<stdio.h>
#include<string.h>

//4 no return, no parameter
void descending_order(void)
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if(a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++)
        printf("%d ",a[i]);
}



//3 no return, parameter
void change_case(char ch)
{
    if(ch >='a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    else if(ch >= 'A' && ch<='Z')
    {
        ch = ch + 32;
    }

    printf("%c\n",ch);
}


//2 has return, no parameter
int length_of_string(void)
{
    char ch[]="hello phitron";
    int len = strlen(ch);
    // printf("%s\n",ch[len]);
    return len;

}


//1 has return, parameter
int summation_of_array_elements(int ar[], int sz)
{
    int sum = 0;
    for(int i = 0; i<sz; i++)   
        sum += ar[i];

    return sum;
}


int main()
{


//4 no return, no parameter
    descending_order();



//3 no return, parameter
    // char character;
    // scanf("%c",&character);
    // change_case(character);


//2 has return, no parameter
    // int length=length_of_string();
    // printf("%d\n",length);





//1 has return, parameter    
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i = 0;i<n;i++)
    // {
    //     scanf("%d",&a[i]);
    // }

    // int res = 0;
    // res = summation_of_array_elements(a,n);
    // printf("%d\n",res);


    

    return 0;
}