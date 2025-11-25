/* Check if one string is  a rotation of another .

Input 1 : abcde
deabc

Output 1: Rotation

Input 2: abc
acb
 Output 2: Not rotation
 */
 
 #include <stdio.h>
#include <string.h>

int main() {
    char s1[300], s2[300], temp[600];

    printf("Enter first string: ");
    scanf("%s", s1);  
    printf("Enter second string: ");
    scanf("%s", s2);

   
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

  
    strcpy(temp, s1);
    strcat(temp, s1);   

   
    if (strstr(temp, s2) != NULL)
        printf("Yes, second string is a rotation of first.\n");
    else
        printf("No, not a rotation.\n");

    return 0;
}

