/* Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>

struct Emp{int id;};

int main(){
    struct Emp e;
    FILE *fp = fopen("emp.bin","rb");
    fread(&e,sizeof(e),1,fp);
    printf("ID=%d\n",e.id);
    fclose(fp);
    return 0;
}

