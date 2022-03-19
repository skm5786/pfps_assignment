#include <stdio.h>
int main(){
    int a;
    printf("enter number\n");
    scanf("%d",&a);
    if (a==0) {
        printf("num is  even\n");
    }
   else if (a%2==0) {
        printf("number is even\n");}
    
        else if(a%2!=0)
    printf("num is odd\n");
    return 0;
        
    }

