#include<stdio.h>
int main()
{
    int i;
    long long n=600851475143;
    for (i=3;i<n;i+=2)
    {
        while(n%i==0)
        {
            n/=i;
        }
    }
    printf("%d",i);
}