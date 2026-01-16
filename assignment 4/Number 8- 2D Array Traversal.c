#include <stdio.h>

int main(){
	
	int nums[6][4] = {
    {23,22,21,20},
	{19,18,17,16},
	{15,14,13,12},
	{11,10,9,8},
	{7,6,5,4},
	{20,21,22,23}
	};  
	
	int i;
	int j;
	for (i = 0; i < 6; i++) {
	    for (j = 0; j < 4; j++) {
	        printf("%d ", nums[i][j]);
	    }
	
    	printf("\n");
	}   
	

	
	return 0;
}