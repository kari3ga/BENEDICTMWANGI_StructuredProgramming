#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("You entered: %s\n", string);

    length = strlen(string);
    printf("The length of the string is : %d", length);

    return 0;
}
