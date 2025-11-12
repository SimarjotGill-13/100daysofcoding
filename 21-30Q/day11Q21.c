/* WAP to display the month name and number of days using switch-case for a given number.

input 1:  2
output 1: February, 28 days

input 2: 12
output 2 : December, 31 days
*/

#include<stdio.h>
int main() {
int month, days;
printf("Enter month number (1-12): ");
scanf("%d", &month);
switch (month) {
case 1: 
printf("January, 31days");
break;
case 2:
printf("February,28 days");
break;
case 3:
printf("March,31 days");
break;
case 4: 
printf("April, 30days");
break;
case 5:
printf("May,31 days");
break;
case 6:
printf("June,30 days");
break;
case 7: 
printf("July, 31days");
break; 
case 8:
printf("August,31 days");
break;
case 9:
printf("September,30 days");
break;
case 10: 
printf("October, 31days");
break;
case 11:
printf("November,30 days");
break;
case 12:
printf("December,31 days");
break;
}
return 0;
}

