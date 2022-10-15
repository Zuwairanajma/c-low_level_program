#include <stdio.h>
#include <stdlib.h>

void sub(int a, int b)
{
    printf("Result: %d", a-b);
}
int main()
{

    int num1 = 50;
    int num2 = 20;

    sub(num1, num2);
    return 0;
}
