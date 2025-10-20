/* Write a program to find and display the sum of the first n natural numbers.

Input 1 : 5
Output 1 : sum = 15

Input 2 : 10
Output 2 : sum = 55

*/

#include <stdio.h>
int main(){
int n,sum ;
printf(" the value of n : ");
scanf("%d", &n );

sum = (n * (n + 1) ) / 2;
printf("\nSum of first n natural numbers : %d", sum );

return 0;
}
