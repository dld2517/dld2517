#include <stdio.h>
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting, you can also write: divide = (float)first/second

   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide); // "%.2lf" to print two decimal digits, by default (%lf) we get six
   printf("\n\nMy name is Danny\n\n"); 
   return 0;
}
