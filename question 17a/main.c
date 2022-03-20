#include<stdio.h>
int main(){
   int minno,maxno,p,q,r,s;
   printf("enter any four numbers:");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   minno=p;
   maxno=p;
   if(minno>q)
      minno=q;
   else if(maxno<q)
      maxno=q;
   if(minno>r)
      minno=r;
   else if(maxno<r)
      maxno=r;
   if(minno>s)
      minno=s;
   else if(maxno<s)
      maxno=s;
   printf("Largest number from the given 4 numbers is:%d\n",maxno);
   printf("Smallest numbers from the given 4 numbers is:%d\n",minno);
   return 0;
}
