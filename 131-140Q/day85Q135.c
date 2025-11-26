/* Assign explicit values starting from 10 and print them.

Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

enum Level {LOW=10, MID=20, HIGH=30};

int main() {
    printf("LOW = %d\n", LOW);
    printf("MID = %d\n", MID);
    printf("HIGH = %d\n", HIGH);
    return 0;
}

