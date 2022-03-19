#include <stdio.h>

int main(){
    int i=1,j=1,n;
    printf("enter your number: \n");
    scanf("%d",&n);
    while (i<=n) {
        j=i*j;
        i++;
    }
    printf("factorial of %d is %d\n",n,j);
    return 0;
    
}
