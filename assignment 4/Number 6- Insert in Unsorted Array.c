#include <stdio.h>

int main() {
	
	
    int array_size;
    int position, numToInsert;
    int i;
    
    

    printf("Enter array size \n");
    scanf("%d", &array_size);
    
    int nums[100];
    
    printf("Enter the numbers in ascending order \n");
    for (i = 0; i < array_size; i++) {
        printf("Enter num %d: ", i);
        scanf("%d", &nums[i]);
    }
    
    printf("Enter number to be inserted \n");
    scanf("%d", &numToInsert);
    
    
    printf("Enter index to insert to \n");
    scanf("%d", &position);
    
    
    for (i = array_size - 1; i >= position; i--) {
        nums[i + 1] = nums[i];
    }
    
 
    nums[position] = numToInsert;
    array_size++; 
    
    
    printf("New Array: ");
    for (i = 0; i < array_size; i++) {
        printf("%d ", nums[i]);
	}
} 