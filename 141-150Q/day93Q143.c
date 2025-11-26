/* Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student { int marks; };

int main() {
    struct Student s[5];
    int max=0;

    for(int i=0;i<5;i++) {
        scanf("%d",&s[i].marks);
        if(s[i].marks > max) max = s[i].marks;
    }

    printf("Highest = %d\n", max);
    return 0;
}

