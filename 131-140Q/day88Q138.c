/* Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Color {RED, BLUE, GREEN};

int main() {
    printf("RED = %d\n", RED);
    printf("BLUE = %d\n", BLUE);
    printf("GREEN = %d\n", GREEN);
    return 0;
}

