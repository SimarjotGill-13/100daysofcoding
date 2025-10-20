/* Write a program to find the roots of quadratic equation and categorize them.

input 1 :  1 -3 2
output 1 : Roots are real and different : 2,1

input 2: 1 -2 1
output 2: Roots are real and same : 1

input 3 : 1 2 5 
output 3 : Roots are complex
*/

#include<stdio.h>
#include<math.h>
int main() {
int a,b,c,r1,r2;
printf("enter the values of a,b and c of the quadratic equation: ");
scanf("%d%d%d", &a, &b, &c);
int D = b * b  - ( 4 * a * c);

r1 = (-b + sqrt(D)) / (2 * a) ;
r2 = (-b - sqrt(D)) / (2 * a) ;
 
if (D==0 && r1 == r2) {
printf("Roots are real and same : %d" , r1);
}
else if (D > 0  &&  r1!= r2) {
printf("Roots are real and different : %d %d" , r1, r2);
}
else{
printf("roots are complex.");
}
return 0;
}

