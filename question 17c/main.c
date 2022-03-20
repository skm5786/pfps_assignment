#include <stdio.h>
int main()
{
    int A[3][3], B[3][3];
    int row, col, isSym;
  
     
      
    printf("Enter the elements in matrix of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
  

    
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            B[row][col] = A[col][row];
        }
    }
    
      
       
    isSym = 1;
    for(row=0; row<3 && isSym; row++)
    {
        for(col=0; col<3; col++)
        {
            if(A[row][col] != B[row][col])
            {
                isSym = 0;
                break;
            }
        }
    }
  
     
  
       
    if(isSym == 1)
    {
        printf("\n Matrix is Symmetric. \n");
  
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                printf("%d ", A[row][col]);
            }
  
            printf("\n");
        }
    }
    else
    {
        printf("\n Matrix is not Symmetric.");
    }
  
    return 0;
}
