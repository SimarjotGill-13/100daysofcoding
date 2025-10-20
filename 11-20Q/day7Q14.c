/* WAP to input a character and check whether it is a vowel or consonant using if-else.

input 1:a
ouput 1: vowel

input 2: b
output 2 : consonant

*/

#include<stdio.h>
int main() {
char c;
printf("enter a character:");
scanf("%c", &c);

if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
printf("it is a vowel");
}
else {
printf("it is a consonant .");
}
return 0;
}


