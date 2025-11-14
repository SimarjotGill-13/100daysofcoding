/* Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main (){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int array [size];
    int x=0,y=0,z=0;
    for(int i = 0;i<size;i++){
    printf("enter elements :");
        scanf("%d",&array[i]);
        if(array[i]<0){
            y++;
        }else if(array[i]==0){
            z++;
        }else{
            x++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n",x,y,z);
    return 0;
}
