#include <stdio.h>

int main(){
	
	int array_size;
	
	printf("Enter elements to be stored in the array \n");
	scanf("%d",&array_size);
	
	int numbers[array_size];
	
	int smallest=9999999;
	int largest=0;
	int i,j;
	for(i=0;i<array_size;i++){
		printf("Enter num %d \n",i);
		scanf("%d",&numbers[i]);
		if(numbers[i]<smallest){
			smallest=numbers[i];
		}
		if(numbers[i]>largest){
			largest=numbers[i];
		}
		
	}
	
	printf("Smallest number, %d \n",smallest);
	printf("Largest number, %d \n",largest);
	
	return 0;
	
	 
	
}