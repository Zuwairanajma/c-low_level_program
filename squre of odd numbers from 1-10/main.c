#include <stdio.h>
#include <stdlib.h>
/**
print square of odd numbers between 1-10
*/

int main()
{
    int i;
    for(i =2; i<=10; i++)
    {
    if (i%2!=0)
        printf(" Square of odd numbers = %d\n", i*i);
    }
    return 0;
}

