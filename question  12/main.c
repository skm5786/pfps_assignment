#include <stdio.h>
int fib(int j)
{
    if (j==0) {
        return 0;}
        else if(j==1)
        return 1;
        else;
        return (fib(j-1)+fib(j-2));
    }
 

int main()
{
    int x,n,j;
    printf("enter nth term\n");
    scanf("%d",&j);
    n=j-1;
    for (x=0; x<n; x++) {
        fib(x);
       
    }
   
    printf("%d\n",fib(x));
   
    
    return 0;
}
