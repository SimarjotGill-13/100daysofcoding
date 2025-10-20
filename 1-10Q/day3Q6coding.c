/*Write  a program to swap two numbers using a third variable.

Input 1: 3 5
Output 1 : after swap : 5 3

Input 2 : -1 1
Output 2 : after swap : 1 -1

*/

#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swap : %d %d\n", a, b);
    return 0;
}