/* WAP to display the day of the week based on a number (1-7) using switch-case.

input 1: 1
output 1: Monday

input 2: 5
output 2 : Friday
*/

#include<stdio.h>
int main() {
int i,Day;

printf("Enter the value 1-7 to know the day:");
scanf("%d", &Day);

switch (Day) {
case 1: 
printf("Day is Monday");
break;

case 2:
 printf("Day is Tuesday");
 break;
 
 case 3 :
 printf("Day is Wednesday.");
 break;
 
 case 4:
 printf("Day is Thursday.");
 break;
 
 case 5: 
 printf("Day is friday");
 
break;

case 6 : 
printf("Day is saturday");
break;

case 7 : 
printf("Day is Sunday");
break;

default :
printf("Day is invalid");

}
return 0;
}

