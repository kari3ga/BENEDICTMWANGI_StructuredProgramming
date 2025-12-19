#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    num1 = 10;
    num2 = 20;
    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("The sum is: %d", sum);


    return 0;
}
