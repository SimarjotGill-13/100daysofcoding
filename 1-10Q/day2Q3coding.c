/* Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Input 1: length = 5 , breadth =  10
Output 1: Area = 50, Perimeter = 30

Input 2 : length = 3 , breadth = 7
Output 2 : Area = 21 , Perimeter = 20 
*/

#include<stdio.h>
int main(){
int length , breadth , Area , Perimeter;

printf("Enter length and breadth of the rectangle: ");
scanf("%d%d", &length , & breadth);

Area = length * breadth;
Perimeter = 2 * ( length + breadth );

printf("Area of the rectangle = %d \n",Area);
printf("Perimeter of the rectangle = %d \n", Perimeter);

return 0;
}
