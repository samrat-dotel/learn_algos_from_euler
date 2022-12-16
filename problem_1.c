#include<stdio.h>
#include<math.h>

int main()
{
    int i,x=1,sum=0;
    for (i=1;i<1000;i++)
    {
        if ((x%3==0)||(x%5==0))
    {
		sum=sum+x;
        x++;
    }
		else
    {
		sum=sum;
        x++;
    }
    }
    printf("sum=%d",sum);
}