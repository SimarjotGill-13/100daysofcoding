/* Count spaces, digits and special characters in a string.

Input 1: a b1&2
Output 1: spaces=1, digits=2, Special=1

*/

#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z')) {
          
        }
        else if (str[i] != '\n') {
            special++;  
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}

