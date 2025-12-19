#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10;
    int *pCount;

    pCount = &count;

    *pCount = 15;

    printf("The updated value is: %d\n", count);

    return 0;
}
