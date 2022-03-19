#include <stdio.h>

int main(){
    int i,j,n;
    printf("enter your number: \n");
    scanf("%d",&n);
    for (i=1,j=1; i<=n; i++) {
        j=i*j;
    }
    printf("factorial of %d is %d\n",n,j);
    return 0;
    
}
