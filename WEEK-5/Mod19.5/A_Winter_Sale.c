#include<stdio.h>
int main()
{
    // y-y*x%=p

    int x,p;
    scanf("%d %d",&x,&p);

    float y = (float)(100*p)/(float)(100-x);
    printf("%.2f\n",y);


    return 0;
}