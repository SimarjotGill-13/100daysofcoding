/* Find the longest word in a sentence.

Input 1 : I love programming
Output 1 : programming

*/

#include <stdio.h>

int main() {
    char str[300], longest[100];
    int i = 0, currLen = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }

        i++;
    }

    
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';
    printf("Longest word: %s\n", longest);
    return 0;
}
