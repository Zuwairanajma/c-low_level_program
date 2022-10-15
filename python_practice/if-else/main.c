#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
printf("Enter the number to check if number is positive or negative \n");
scanf("%d", &number);

if (number < 0) {
     printf("%d is negative", number);
}else{
     printf("%d is positive", number);

}


}
