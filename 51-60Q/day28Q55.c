/* Write a program to print all the prime numbers from 1 to n.

input 1: 10
output 1: 2 3 5 7 

input 2: 20
output 2: 2 3 5 7 11 13 17 19

*/


#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    printf("2 ");
    for(int i = 3;i<=a;i++){
        int isPrime = 1;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ",i);
    }

    printf("\n");
    return 0;
}
