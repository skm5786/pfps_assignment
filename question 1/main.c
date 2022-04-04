#include <stdio.h>
int main()
{
    int a=31,b=2,r;
    printf("press 1 for hardcoded inputs\npress 2 for inputs supplied by the user\n");
    scanf("%d",&r);
    if (r==1) {
        printf("area of length=2, breadth=2 is %d\n",a*b);
    }
    else if(r==2){
        
    
    printf("input length:  \n");
    scanf("%d",&a);
    printf("input breadth:  \n");
    scanf("%d",&b);
        printf("area is %d\n",a*b);
    }
    
}
