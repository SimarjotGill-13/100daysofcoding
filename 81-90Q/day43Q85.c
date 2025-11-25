/* Reverse a string.

Input 1: abcd
Output 1 :dcba

*/

#include<stdio.h>
int main() {
char str[100], rev[100];
int i,j,length=0;
printf("Enter a string :");
scanf("%s", str);

for (i=0; str[i] != '\0'; i++) {
length ++;
}
j=0;
for (i=length - 1; i >= 0;i--) {
rev[j] = str[i];
j++;
}
rev[j] = '\0';
printf("Reversed a string: %s\n", rev);
return 0;
}

