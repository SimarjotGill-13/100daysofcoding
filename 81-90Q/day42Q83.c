/* WAP to count vowels and consonants in a string.

Input 1: hello
Output 1 : Vowels = 2, Consonants=3
*/

#include<stdio.h>

int main() {
char str[100];
int i , vowels=0,consonants=0;
printf("Enter a string :");
scanf("%s", str);
for (i=0; str[i] != '\0'; i++) {
char ch = str[i];
if (ch  >= 'A' && ch <= 'Z')
ch = ch + 32;

if (ch >= 'a' && ch<= 'z' ){
if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
vowels++;
else
consonants++;
}
}
printf("vowels = %d\n", vowels);
printf("consonants = %d\n", consonants);
return 0;
}


