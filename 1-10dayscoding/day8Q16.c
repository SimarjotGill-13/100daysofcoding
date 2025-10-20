/* WAP to input three numbers and find the largest among them using if-else.

input 1: 3  7  5
output 1: largest is 7

input 2: -1  -5  0
output 2 : Largest is 0
*/

#include<stdio.h>
int main() {
int a,b,c;
 
 printf("enter three numbers :");
 scanf("%d %d %d", &a , &b , &c);
 
 if ( a >= b && a >= c) {
 printf(" Largest number is %d\n" ,a);
 }
 if ( b >= c && b >= a) {
 printf(" Largest number is %d\n" ,b);
 }
 else {
 printf("Largest number is %d\n" ,c);
 }
 return 0;
 }
 
