/* Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

enum Test {A=5, B=10};

int main() {
    printf("A=%d B=%d\n", A, B);
    return 0;
}

