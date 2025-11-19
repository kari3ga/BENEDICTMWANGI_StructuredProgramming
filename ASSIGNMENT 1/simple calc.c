#include <stdio.h>
#include <stdlib.h>

int main()
{
  char operator;
  double num1;
  double num2;
  double result;
  int num_1;
  int num_2;

  printf("\nEnter an operator (+-*/%%):");
  scanf(" %c", &operator);

  printf("Enter number 1: ");
  scanf("%lf", &num1);

  printf("Enter number 2: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      result = num1 + num2;
      printf("\nresult: %.2lf", result);
      break;
    case '-':
      result = num1 - num2;
      printf("\nresult: %.2lf", result);
      break;
    case '*':
      result = num1 * num2;
      printf("\nresult: %.2lf", result);
      break;
    case '/':
      if (num2 != 0) {
        result = num1 / num2;
        printf("\nresult: %.2lf", result);
      } else {
        printf("\nError: Division by zero!");
      }
      break;
    case '%':
      num_1 = (int)num1;
      num_2 = (int)num2;

      if (num_2 != 0) {
        result = num_1 % num_2;
        printf("\nresult: %.0lf (using integers %d %% %d)", result, num_1, num_2);
      } else {
        printf("\nError: Modulus by zero!");
      }
      break;

    default:
      printf("%c is not valid", operator);
  }

  return 0;
}
