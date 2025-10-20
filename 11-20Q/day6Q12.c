/* Write a program to input an integer and check whether it is positive,negative or zero using nested if-else.

input 1: -5
output 1 :negative

input 2 : 0
output 2 : zero

input 3 : 10
output 3 : positive
*/

#include<stdio.h>
int main() {
int i;
printf("enter an integer : ");
scanf("%d" , &i);

if ( i != 0 ) 
{
if(i > 0) {
printf("integer is positive.");
}
else if ( i < 0) {
printf("integer is negative");
}
}
else {
printf("integer is zero");
}

return 0;
}

