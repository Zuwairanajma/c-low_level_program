#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scores[5] = {50, 60, 65, 59, 49, 70};
    int i;
    //for( counter; limit; increment/decrement)
    for (i = 0; i < 6; i++)
    {
        if (scores[i] > 50)
        {
           printf("sore[%d]: %d\n", i, scores[i]);
        }

    }


    return 0;
}
