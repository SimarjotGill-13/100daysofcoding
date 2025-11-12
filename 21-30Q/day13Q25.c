/* WAP to implement a basic calculator using switch case for + , -, *, / %

input 1 : 4 2 +
output 1: 6

input 2: 10 3 %
output 2: 1

input 3: 15 5 /
output 3 : 3
*/

#include<stdio.h>
int main() {
int a,b;
char c;
printf("Enter the values of a,b, c :");
scanf("%d %d %c", &a, &b, &c);

switch(c) {
case '+': 
printf("%d", a + b);
break;

case '-':
printf("%d", a - b);
break;

case '*':
printf("%d", a * b);
break;

case '/':
printf("%d", a / b);
break;

case '%':
printf("%d", a % b);
break;
}
return 0;
}