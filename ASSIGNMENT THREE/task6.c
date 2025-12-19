#include <stdio.h>
#include <stdlib.h>


void incrementByValue(int num){
    num = num + 1;

}
void incrementByReference(int *ptr){

    *ptr = *ptr +1;

}



int main()
{
    int num = 10;

    printf("Original value is: %d\n", num);

    incrementByValue(num);
    printf("Value after incrementByValue call is: %d\n", num);


    incrementByReference(&num);
    printf("Value after incrementByReference call is: %d\n", num);


return 0;
}
