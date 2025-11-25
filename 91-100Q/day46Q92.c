/* Find the first repeating lowercase alphabet in a string.

Input 1 : stress
Output 1 : s
*/

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  
    int i;

    printf("Enter a lowercase string: ");
    scanf("%s", str);     

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a'; 

        freq[index]++;

        if (freq[index] == 2) {    
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}


