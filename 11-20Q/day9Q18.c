/* WAP that accepts a percentage(0-100) and assigns a grade based on following criteria:
90-100 :Grade A
80-89 : Grade B
70-79 :  Grade C
60-69 : Grade D
below 60 : Grade F

input 1: 95
output 1: Grade A

input 2 : 82
output 2: Grade B

input 3: 68
output 3: Grade D

input 4: 50
output 4: Grade F
*/

#include<stdio.h>
int main() {
int i;
printf("Enter you percentage: ");
scanf("%d", &i);

if (i >= 90 && i <= 100) {
printf("Grade A " );
}
else if ( i >= 80 && i <= 89) {
printf("Grade B");
}
else if (i >= 70 && i <= 79) {
printf("Grade C");
}
else if (i >= 60 && i <= 69) {
printf("Grade D");
}
else {
printf(" Grade F");
}
return 0;
}

