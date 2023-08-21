#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];

    scanf("%s%s",&a,&b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    printf("%d %d\n",len1,len2);
    char c[21];

    for(int i = 0; i<len1; i++)
    {
        c[i] = a[i];
    }

    int k = len1;
    for(int j = 0; j<len2; j++)
    {
        c[k] = b[j];
        k++;
    }
    c[len1+len2]='\0';

    // for(int i = 0; i<len1+len2; i++)
    // {
        printf("%s",c);
    // }
    // আমি এখানে %s দিয়ে সরাসরি প্রিন্ট করার সময় 
    // একটা a বেশি আস্তেছিলো। তাই for লুপ ব্যবহার করেছি।
    // কেন এমনটা হলো?
    printf("\n");

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n",a,b);
    
     

    return 0;
}