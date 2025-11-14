/* WAP to find the sum of series : 1+ 3/4 + 5/6 + 7/8 + __ upto n terms 

input 1: 3
output 1: Approx sum : 3.3

input 2: 5
output 2: Approx sum : 4.4
*/
#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    float sum = 1;
    while(a!=1){
        sum += (2.0*a-1)/(2*a);
        a--;
    }
    printf("Approximate sum: %.1f\n",sum);
    return 0;
}
