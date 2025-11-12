/* WAP to calculate electricity bill based on units consumed with these rates : 
First 100 units at ₹5/unit
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit
above at ₹12/unit

input 1: 50
ouput 1: ₹250

input 2: 150
output 2: 150

input 3 : 250
output 3 : ₹1700
*/

#include<stdio.h>
int main() {
int units ;

printf("Enter number of units consumed :");
scanf("%d", &units);

if( units <= 100) {
int bill = 5 * units;
printf("Electricity bill : ₹%d", bill);
}
else if(units <= 200) {
int bill = 5 * 100 + 7 * (units - 100);
printf("Electricity bill : ₹%d ", bill);
}
else if (units <= 300) {
int bill = 5 * 100 + 7 * 100 + 10 * (units - 200);
printf("Electricity bill : ₹%d" , bill);
}
else {
int bill = 5 * 100 + 7 * 100 + 10 * 100 + 12 * (units - 300);
printf("Electricity bill : ₹%d" , bill);
}
return 0;
}

