//
//  main.c
//  question 13
//
//  Created by sumit thakral on 19/03/22.
//

#include <stdio.h>
int sum(int i){
    if (i==0) {
        return 0;
    }
    else;
    return i+sum(i-1);
}
int main()
{
    int n;
    printf("enter number of terms: \n");
    scanf("%d",&n);
    printf("sum is %d\n",sum(n));
    return 0;
}

