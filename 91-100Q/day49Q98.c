/* Print initials of  name with the surname displayed in full.

Input 1: John David Doe
Output 1 : J.D. Doe

*/

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, lastStart = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin); 

  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            lastStart = i + 1;   
        }
    }

 
    if (str[0] != ' ' && 0 < lastStart)
        printf("%c ", str[0]);

    for (i = 1; i < lastStart - 1; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            printf("%c ", str[i+1]);
        }
    }

   
    for (i = lastStart; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

