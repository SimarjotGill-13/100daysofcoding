/* Check if two strings are anagrams of each other.

Input 1 : listen
silent

Output 1: Anagrams

Input 2 :hello
world
Output 2 :Not anagrams 
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }

    
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }

   
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}

