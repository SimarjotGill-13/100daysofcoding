/* WAP to find profit and loss percentage given cost price and selling price.

Input 1: 1000 1200
output 1: Profit 20%

input 2: 1000 800
output 2: Loss 20%

input 3: 1000 1000
output 3: No profit No loss

*/

#include<stdio.h>
int main() {
float i,j;
printf("Enter cost price and selling price :");
scanf("%f %f", &i, &j);

if ( i > j ) {
 float loss = ((i - j ) / i ) * 100;
 printf("loss = %.2f", loss);
}
else if (i < j ) {
 float profit = ((j - i ) / i) * 100;
 printf("profit = %.2f", profit);
}
else {
printf("No profit No loss");
}
return 0;
}
