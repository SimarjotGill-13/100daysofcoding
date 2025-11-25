/* Remove all vowels from a string.

Input 1 : education
Output :dctn
*/

#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

      
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

       
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            continue;         

        result[j] = str[i];  
        j++;
    }

    result[j] = '\0';        

    printf("String after removing vowels: %s", result);

    return 0;
}

