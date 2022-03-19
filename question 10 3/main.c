#include <stdio.h>
int main()
{
    int i=1,j=0,n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    do {
        j=i+j;
        i++;
    }while(i<=n);
    printf("sum of first %d natural number is %d\n",n,j);
    return 0;
}
