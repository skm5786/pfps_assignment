#include <stdio.h>

int yearchecker(int b)
{
    if (b% 4  ==0) {
        printf("year is leap\n");
        
    }
    else if (b%4!=0)
    printf("year is not leap\n");
    
    return 0;
}





int main()
{
    int a;
    printf("enter number:  \n");
    scanf("%d",&a);
    yearchecker(a);
    return 0;
    
}
