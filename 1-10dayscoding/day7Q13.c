/* WAP to input a year and check whether it is a leap year or not using conditional statements
Input 1: 2020
outptut 1:leap year

input 2: 1900
output 2: not a leap year

input 3: 2000
output 3:leap year
*/

#include<stdio.h>
int main() {
int i;
printf("Enter the year to check if it is a leap year or not : ");
scanf("%d", &i);

if (( i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
printf(" Year is a leap year.");
}
else {
printf("Year is not a leap year.");
}
return 0;
}
