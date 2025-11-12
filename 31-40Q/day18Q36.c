/* WAP to find the HCF (GCD) of two numbers 
input 1: 12 18
output 1: 6

input 2: 7 9
output 2 : 1
*/

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int smaller = (a<b)?a:b;
    for(int i = smaller; i >=1;i--){
        if(a%i==0&&b%i==0){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
