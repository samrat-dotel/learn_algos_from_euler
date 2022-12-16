#include<stdio.h>
#include<math.h>

int main()
    {
      int a=0,b=1,c,sum=0;
    do
    {
        c=a+b;
        if (c%2==0)
       { 
        sum=sum+c;
        }
        else
        {
          sum=sum;
          }
        a=b;
        b=c;
     } while (c<=4000000);
    printf("sum=%d",sum);
}