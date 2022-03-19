//using while loop
#include <stdio.h>
int main()
{
    int i=1,j=0,n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    while (i<=n) {
        j=i+j;
        i++;
    }
    printf("sum of first %d natural number is %d\n",n,j);
    return 0;
}
