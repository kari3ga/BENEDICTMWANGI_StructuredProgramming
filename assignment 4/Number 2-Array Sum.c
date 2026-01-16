#include <stdio.h>
#include <stdlib.h>

int main() {
    int ARRY_SIZE;
    printf("Enter an array size\n");
    scanf("%d", &ARRY_SIZE);

	int i;
	float sum=0;
	
    float *nums = malloc(ARRY_SIZE * sizeof(float));
    
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    for (i = 0; i < ARRY_SIZE; i++) {
        printf("Enter num %d \n" ,i);
        scanf("%f",&nums[i]);
        sum+=nums[i];
    }
    
    printf("\n");
    printf("The sum is, %f",sum);

   
    free(nums);
    return 0;
}  