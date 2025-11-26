/* Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date { int d,m,y; };
struct Emp { struct Date doj; };

int main() {
    struct Emp e;
    scanf("%d%d%d",&e.doj.d,&e.doj.m,&e.doj.y);
    printf("%d/%d/%d\n", e.doj.d, e.doj.m, e.doj.y);
    return 0;
}

