/*  WAP to input a character and check whether it is an uppercase alphabet ,lowercase alphabet , digit or special character.

input 1: A
output 1 : Uppercase alphabet

input 2: a
output 2: lowercase alphabet

input 3: 3
output 3: digit 

input 4: #
output 4: special character
*/

#include<stdio.h>
int main(){
char i;

printf("Enter a character: ");
scanf("%c", &i);

if (i >= 'A' && i <= 'Z') {
printf("Character is an uppercase alphabet.");
}
else if (i >= 'a' && i <= 'z') {
printf("Character is lowercase alphabet.");
}
else if (i >= '0' && i <= '9') {
printf("Character is a digit.");
}
else { 
printf("Character is a special character.");
}
return 0;
}


