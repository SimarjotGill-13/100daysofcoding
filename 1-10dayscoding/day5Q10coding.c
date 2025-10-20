/* Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Input 1 :3661
Output 1 :  1 : 1 : 1

Input 2 : 7322
Output 2 :  2 : 2 : 2

*/

#include <stdio.h>
int main(){
int time, hours, minutes, seconds;
printf("write time in seconds : \n");
scanf("%d", &time);

hours = time / 3600;
minutes =( time %  3600) / 60;
seconds = time % 60;

printf("time = %02d:%02d:%02d\n", hours , minutes , seconds);

return 0;
} 
