/* WAP to find the 1's complement of  a binary number and print it

input 1: 1010
output 1: 0101

input 2: 1111
output 2: 0000
*/
#include<stdio.h>

int main (){
    char a;
    
    while((a = getchar()) != '\n'){
        (a=='1')?printf("0"):printf("1");
    }

    printf("\n");
    return 0;
} 
