#include<stdio.h>
#include<math.h>
main()
{
	int a,b=0,c,d=0,e,f;
	for (c=1;c<=100;c++)
    {
        d=d+c;
    }
    e=pow(d,2);
    printf("%d",e);
    printf("\n");
    for (a=1;a<=100;a++)
    {
        b=b+pow(a,2);
    }
    printf("%d",b);
    printf("\n");
    f=e-b;
    printf("%d",f);
}