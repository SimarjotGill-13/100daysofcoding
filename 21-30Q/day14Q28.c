/* WAP to print the product of even numbers from 1 to n.

input 1: 4
output 1 :  8 ( 2 * 4)

input 2 : 6
output 2 : 48 (2 * 4 * 6)

*/

#include<stdio.h>
int main() {
int i,n;
long long product = 1;

printf("Enter the value of n:");
scanf("%d", &n);

for (i = 2; i <= n ; i += 2) {
product = product * i ;
}
printf("Product of even numbers from 1 to n : %lld", product);
return 0;
}

