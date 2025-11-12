/* WAP to calculate library fine based on  late days as follows :
First 5 days late : ₹2/day
Next 5 days late : ₹4/day
Next 20 days laet : ₹6/day
More than 30 days : Memborship cancelled.

Input 1 : 4
output 1 : Fine ₹8

input 2: 8
output 2: fine ₹32

input 3 : 15
output 3: Fine ₹60

input 4 : 31
output 4: Membership cancelled

*/

#include<stdio.h>
int main() {
int days;
printf("Enter number of late days : ");
scanf("%d", &days);

if(days <= 5 ) {
int fine = 2 * days;
printf(" Fine : %d", fine);
}
else if(days >= 5 && days <= 10  ) {
int fine = 2 * 5 + 4 * (days - 5);
printf(" Fine : %d",fine);
}
else if(days >=10 && days <=30 ) {
int fine = 4 * 5 + 2 * 5 + 6 * (days - 10) ;
printf(" Fine : %d",fine);
}
else {
printf("Membership cancelled.");
}
return 0;
}

