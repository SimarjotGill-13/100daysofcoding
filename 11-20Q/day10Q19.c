/* WAP to classify a triangle as equilateral, isosceles or scalene based on its side lengths.

input 2 : 3 3 3
output 1: equilateral

input 2: 3 3 4
output 2 : Isosceles

input 3 : 2 3 4 
output 3 :  Scalene

*/

#include<stdio.h>
int main() {
int a,b,c;

printf("Enter the sides of a triangle : ");
scanf("%d %d %d" , &a, &b, &c);

if(a==b && b==c ) {
printf("Triangle is an equilateral triangle .");
}
else if  ( a==b || a==c ) {
printf("Triangle is an isosceles triangle");
}

else {
printf("Triangle is scalene triangle");
}

return 0;
}

