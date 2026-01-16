#include <stdio.h>

int main() {
    int size, i, j, temp;
    
    printf("Input the size of array: ");
    scanf("%d", &size);
    

    int arr[size];
    

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Elements of array in sorted order: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}  