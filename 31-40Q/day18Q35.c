/* Write a program to print all factors of a given number.

input 1: 6
output 1: 1 2 3 6
input 2: 10
output 2 : 1 2 5 10
*/
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    for(int i = 1;i<=a;i++){
        if(a%i==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
