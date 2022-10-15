#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    float price = 3.0;
    double amount = 3.0;
    char grade = 'A';

    char name[] = "Feranmi";
    char allNames[30] = {"My name is John Marcus"};

    int priceList[6] = {10, 20, 30, 70, 80, 40};

    printf("num: %d, price: %f, amount: %lf, grade: %c\n", num, price, amount, grade);
    printf("name: %s, priceList[0]: %d, allNames: %s\n", name, priceList[0], allNames);



    return 0;
}
