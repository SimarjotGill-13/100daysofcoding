/* Print the initials of  a name .

Input 1: John Doe
Output 1 : J.D.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);  

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c ", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            printf("%c ", str[i+1]);
        }
    }

    return 0;
}

