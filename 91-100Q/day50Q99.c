/* Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Input 1: 15/04/2025
Output 1: 15-Apr-2025

*/

#include <stdio.h>

int main() {
    char date[20], newDate[20];
    int i = 0, j = 0;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);

    
    newDate[j++] = date[0];
    newDate[j++] = date[1];

    newDate[j++] = '-';

   
    newDate[j++] = 'A';
    newDate[j++] = 'p';
    newDate[j++] = 'r';

    newDate[j++] = '-';

    for (i = 6; date[i] != '\0'; i++) {
        newDate[j++] = date[i];
    }

    newDate[j] = '\0';

    printf("Converted date: %s\n", newDate);

    return 0;
}

