/* Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

struct Data { int x; };

void show(struct Data d) {
    printf("%d\n", d.x);
}

int main() {
    struct Data a;
    scanf("%d",&a.x);
    show(a);
    return 0;
}

