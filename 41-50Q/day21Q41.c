/* WAP to swap the first and last digit of a number .

input 1 : 1234
output 2: 4231
input 2: 1001
output 2: 1001

*/
#include<stdio.h>
#include<math.h>

int main (){
    int a;
    scanf("%d",&a);
    
    int first = a%10;
    int number_of_digits = log10(a);
    int last = a/pow(10,number_of_digits);
    int num = a - (first + last * pow(10,number_of_digits)) + (last + first * pow(10,number_of_digits));
    printf("%d\n",num);
    return 0;
}
