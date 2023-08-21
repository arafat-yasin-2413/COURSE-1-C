#include<stdio.h>
int main()
{
    int a;
    double b;
    float fl;
    char ch;

    // scanf("%d %lf %f %c",&a,&b,&fl,&ch);
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%f",&fl);
    scanf(" %c",&ch);


    printf("%d\n",a);
    printf("%lf\n",b);
    printf("%.2f\n",fl);
    printf("%c\n",ch);



    return 0 ; 
}