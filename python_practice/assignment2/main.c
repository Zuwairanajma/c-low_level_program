#include <stdio.h>
#include <stdlib.h>

// which is greater

void maxNum(int a, int b)
{
    if (a > b)
    {
        printf("a(%d) is greater than b(%d)", a , b);
    }
    else if (a < b)
    {
        printf("b(%d) is greater than a(%d)", b , a);
    }
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    maxNum(num1, num2);
    return 0;
}
