/* WAP to reverse a given number.
input 1: 1234
output 1: 4321

input 2: 100
output 2 : 1
*/

#include<stdio.h>

int main (){
    int a,reversed = 0;
    scanf("%i",&a);

    while(a!=0){
    reversed = 10*reversed+(a%10);
        a = a/10;
    }

    printf("%i\n",reversed);
    return 0;
}
