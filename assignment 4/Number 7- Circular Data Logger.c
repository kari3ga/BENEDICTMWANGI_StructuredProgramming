#include <stdio.h>
#define BUFFER_SIZE 10


int buffer[BUFFER_SIZE];
int head = 0;
int count = 0; 

void insert_sample(int value) {
	
	
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++; 
    }
}

void print_samples() {
    if (count == 0) {
        printf("No data recorded.\n");
        return;
    }

    printf("Stored samples from oldest to the newest ");
    
    int i;
    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE;
    
    for (i = 0; i < count; i++) {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}


int main() {
    int input;
    
    printf("Circular Data Logger-Buffer size %d \n", BUFFER_SIZE);
    printf("Enter sensor values or enter -1 to exit the program \n");
    
    while (1) {
        printf("Enter value: ");
        scanf("%d", &input);
        
        if (input == -1) break;
        
        insert_sample(input);
        print_samples();
    }
    
    printf("Logger has stopped.\n");
    return 0;
}   