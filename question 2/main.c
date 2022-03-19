#include <stdio.h>
int main(){
    float r,h,j;
    int a;
    printf("input radius of circle:\n");
    scanf("%f",&r);
    printf("area is %f\n",3.14*r*r);
    j=3.14*r*r;
    printf("enter 1 for volume\n");
    scanf("%d",&a);
if (a==1) {
    printf("input height of cylinder:\n");
    scanf("%f",&h);
    printf("volume is %f\n",j*h);
    }
    return 0;
}
