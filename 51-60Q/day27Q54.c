/* Q54: Write a program to print the following pattern:

   *   
  ***
 *****
*******
 *****
  ***
   *

*/

#include<stdio.h>

int main (){
    for(int i = 1;i<=4;i++){
        for(int j = 4-i;j!=0;j--){
            printf(" ");
        }
        for(int j = (i*2)-1;j!=0;j--){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 3;i!=0;i--){
        for(int j = 4-i;j!=0;j--){
            printf(" ");
        }
        for(int j = (i*2)-1;j!=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
