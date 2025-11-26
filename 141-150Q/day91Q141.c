/* Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
};

int main() {
    struct Student s;

    scanf("%s%d", s.name, &s.roll);
    printf("Name=%s Roll=%d\n", s.name, s.roll);

    return 0;
}

