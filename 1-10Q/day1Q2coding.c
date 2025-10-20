/* Write a program to input two numbers and display their sum,difference,product and quotient.

Sample test case 1 :
input : 10 2
output : Sum=12, Diff=8, Product=20, Quotient=5

Sample test case 2 :
input : 7 3
output : Sum=10, Diff=4, Product=21, Quotient=2
*/

#include<stdio.h>
int main() {
int a, b;

scanf("%d %d" , &a ,&b);
printf("Sum = %d\n", a + b);
printf("Difference = %d\n", a - b);
printf("Product = %d\n", a * b);
printf("Quotient = %d\n", a / b);

return 0;
} 
