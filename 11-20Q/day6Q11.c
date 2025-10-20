/*Write a program to input an integer and check whether it is even or odd using if-else.

input 1 : 7
output 1 : 7 is odd

input 2 : 12
output 2 : 12 is even

*/

#include<stdio.h>
int main() {
int i;
printf("Enter the number to check whether it is even or odd :\n");
scanf("%d", &i);

if ( i % 2 == 0  )
{
printf("number is an even number");
}
else 
{
printf("number is an odd number");
}
return 0;
}

