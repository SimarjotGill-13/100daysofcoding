/*WAP to print numbers from 1 to n .

input 1 : 5
output 1 : 1 2 3 4 5

input 2 : 3
output 2 : 1 2 3 

*/

#include<stdio.h>
int main() {
int i,n;
printf("Enter the value of n :");
scanf("%d", &n);
for (i=1; i <= n; i++) {
printf("%d ", i);
}
return 0;
}


