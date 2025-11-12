/* WAP to calculate the factorial of a number.

input 1: 5
output 1: 120

input 2: 3
output 2 : 6
*/

#include<stdio.h>
int main() {
int i,n;
long long fact = 1;
printf("Enter the value of n :");
scanf("%d", &n);

for(i = 1; i <= n; i++) {
fact = fact * i ;
}
printf("%lld" , fact);
}

