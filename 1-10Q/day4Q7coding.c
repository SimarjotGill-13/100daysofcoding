/* Write a program to swap two numbers without using a third variable .

Input 1 : 10  20
Output1 : after swap : 20 10

Input 2 : 7 14
Output 2 : 14 7

*/

#include <stdio.h>
int main(){
int a,b ;
printf("Enter two numbers : ");
scanf("%d %d", &a, &b);

printf("Before swapping : a = %d, b = %d\n", a , b);

a = a + b;
b = a - b;
a = a - b;

printf("after swapping : a =  %d , b = %d\n", a, b);

return 0;
}
