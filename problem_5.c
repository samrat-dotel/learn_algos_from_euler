/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. What is
the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

#include<stdio.h>

int main()
{
    int n=2520,i;
    while(1)
    {
        int flag=0;
        for (i=3;i<=20;i++)
        {
            if (n%i!=0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        { 
        printf("%d",n);
        return 0;
        }
        n+=2;
        }
}