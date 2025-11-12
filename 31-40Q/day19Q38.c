/* WAP to find the sum of digits of a number .

input 1: 123
output 1: 6

input 2 : 999
output 2 : 27
*/
#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    int b = 0;
    while(a!=0){
        b += a%10;
        a /= 10;
    }
    printf("%d\n",b);
    return 0;
}
