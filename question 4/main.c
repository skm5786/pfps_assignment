#include <stdio.h>
int main()
{
    float p,r,t;
    printf("enter principle\n");
    scanf("%f",&p);
    printf("enter time\n");
    scanf("%f",&t);
    printf("enter rate\n");
    scanf("%f",&r);
    printf("simple interest is %f\n",(p*t*r)/100);
    return 0;
}
