/* Reverse each word in a sentence without changing the word order.

Innput 1 : I love coding
Output 1 : I evol gnidoc

*/

#include <stdio.h>

int main() {
    char str[300];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

       
        if (str[i] != ' ' && str[i] != '\n') {
            start = i;

            while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
                i++;
            }

        
            int left = start, right = i - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
        } 
        else {
            i++;  
            }
            }
            printf("Modified sentence : %s", str);
            return 0;
            }
            
