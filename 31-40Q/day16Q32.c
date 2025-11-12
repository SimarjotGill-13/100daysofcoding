/* WAP to check if the number is Palindrome .

input 1: 121
output 1: Palindrome

input 2: 123
output 2: Not Palindrome 

*/

#include<stdio.h>
int reverse (int x);

int main (){
    int a;
    scanf("%i",&a);
    int b = reverse(a);
    (a==b)?printf("Palindrome\n"):printf("Not palindrome\n");
    return 0;
}

int reverse (int x){
    int y = 0;
    while(x!=0){
        y = y*10 + x%10;
        x = x/10;
    }
    return y;
}
