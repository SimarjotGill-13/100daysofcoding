/* Write a program to calculate the area and circumference of a circle given its radius.

Input 1 : 7
Output 1 : area = 153.94 , circumference = 43.96

Input 2 : 3
Output 2 : area = 28.27 , circumference = 18.85 
*/

#include<stdio.h>
int main(){
float radius , area , circumference ;

printf("The radius of the circle is : \n");
scanf("%f" , & radius );

 area = 3.14 * radius * radius ;
 circumference = 2 * 3.14 * radius ;
printf("the area of the circle is : %f\n", area);
printf("the  circumference of the circle is : %f\n",circumference);

return 0;
}
