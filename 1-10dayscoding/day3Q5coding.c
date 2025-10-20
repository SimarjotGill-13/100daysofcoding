/* Write a program to convert temperature from celsius to fahrenheit.

Input 1: 0
Output 1: Fahrenheit = 32

Input 2 : 100
Output 2 : fahrenheit = 212
*/

#include<stdio.h>
int main(){
float celsius , fahrenheit ;

printf("the temperature in celsius : ");
scanf("%f", &celsius);

fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
printf("the temperature in fahrenheit : %f\n", fahrenheit);

return 0;
}

 
