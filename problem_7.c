#include <stdio.h>
#include <string.h>

int main()
{
    int x = 2, y, z, a = 0, flag = 1, count = 0;
    {
        while (count < 10002)
        {
            for (y = 2; y < x; y++)
            {
                if (x % y == 0)
                {
                    return 0;
                    break;
                }
                else if (x % y != 0)
                {
                    count ++;
                    z = x;
                    z = z > a ? z : a;
                }
            }

            if (x == 2)
            {
                x = 3;//where is the count in here
                
            }
            else
            {
                x = x + 2;
            }
        }
    }
    printf("%d", a);
}