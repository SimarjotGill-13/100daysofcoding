/* Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[20];
    int marks;
};

int main() {
    struct Student s[3];

    for(int i=0;i<3;i++)
        scanf("%s%d", s[i].name, &s[i].marks);

    for(int i=0;i<3;i++)
        printf("%s %d\n", s[i].name, s[i].marks);

    return 0;
}

