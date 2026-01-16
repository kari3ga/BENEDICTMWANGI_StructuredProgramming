#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be added to the array: ");
    scanf("%d", &n);

	int i,j;
    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Unique elements found:\n");
    for (i = 0; i < n; i++) {
        int isUnique = 1; 
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; 
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}