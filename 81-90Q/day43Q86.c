/* Check if  astring is palindrome.

Input 1 : madam
Output 1: Palindrome
Input 2 : hello
Output 2 : not palindrome 
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);  

  
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    i = 0;
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 1;  
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

