#include <stdio.h>
#include <stdlib.h>

int main() {
    int ARRY_SIZE;
    printf("Enter an array size\n");
    scanf("%d", &ARRY_SIZE);

	int i;
    int *nums = malloc(ARRY_SIZE * sizeof(int));
    
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    for (i = 0; i < ARRY_SIZE; i++) {
        printf("Enter num %d \n" ,i);
        scanf("%d",&nums[i]);
    }
    for (i = ARRY_SIZE-1; i >=0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    free(nums);
    return 0;
}  