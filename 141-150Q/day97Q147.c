/* Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Emp{int id;};

int main(){
    struct Emp e = {101};
    FILE *fp = fopen("emp.bin","wb");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);
    return 0;
}

