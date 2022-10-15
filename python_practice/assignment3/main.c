#include <stdio.h>
#include <stdlib.h>

// which is greater

void minNum(int a, int b, int c)
{
    if (a < b && a < c)
    {
        printf("a(%d) is the smallest", a);
    }
    else if (b < a && b < c)
    {
        printf("b(%d) is the smallest", b);
    }
    else if (c < a && c < b)
    {
        printf("c(%d) is the minimum", c);
    }
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 15;

    minNum(num1, num2, num3);
    return 0;
}
