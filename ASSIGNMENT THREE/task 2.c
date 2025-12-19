#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int *ptr;
    ptr =&num;

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %p\n", &num);
    printf("Value stored in ptr is: %p\n", ptr);
    printf("Value accessed using *ptr is: %d\n", *ptr);
    return 0;
}
