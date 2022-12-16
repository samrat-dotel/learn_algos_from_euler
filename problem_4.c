/* A palindrome number reads the same both ways. The largest palindrome made from the produt of two 2-digit number
is 9009=91*99. Find the largest palindrome made from the product of two 3-digit numbers. */

#include<stdio.h>
int isPal(int n)
{
    int x,y,z=0;
    x=n;
    while(x!=0)
    {
        y=x%10;
        z=(z*10)+y;
        x/=10;
    }
    if (z==n) return 1;
    else return 0;
}

int main()
{
    int i,j,k,l,m=0,result=0;
    for (i=100;i<=999;i++)
    {
        for (j=i;j<=999;j++)
        {
            k=i*j;
            if (isPal(k)!=0)
            {
                result=result>k?result:k;
            }
        }
    }
    printf("%d",result);
}