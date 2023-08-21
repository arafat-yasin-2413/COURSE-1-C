#include<stdio.h>
float phiValue(void)
{
    return 3.1416;
}

int main()
{
    // float res = phiValue(5);
    float res = phiValue();
    printf("%0.4f\n",res);

    return 0;
}