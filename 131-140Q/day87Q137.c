/* Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    int r;
    printf("0=Admin 1=User 2=Guest: ");
    scanf("%d",&r);

    if(r==ADMIN) printf("Admin Access\n");
    else if(r==USER) printf("User Access\n");
    else if(r==GUEST) printf("Guest Access\n");
    else printf("Invalid\n");

    return 0;
}

