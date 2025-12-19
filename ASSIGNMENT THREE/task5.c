#include <stdio.h>
#include <stdlib.h>

void swapNumbers(int *ptr1, int *ptr2){
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}


int main()
{
    int a = 10;
    int b = 15;

    printf("The value before swapping are:\n");
    printf(" a = %d, b = %d\n", a,b);

    swapNumbers(&a,&b);

    printf("\nValues after swapping:\n");
    printf(" a = %d, b = %d\n", a,b);


    return 0;
}
