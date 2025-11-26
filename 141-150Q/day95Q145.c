/* Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Box { int a; };

struct Box get() {
    struct Box b;
    b.a = 100;
    return b;
}

int main() {
    struct Box b = get();
    printf("%d\n", b.a);
    return 0;
}

