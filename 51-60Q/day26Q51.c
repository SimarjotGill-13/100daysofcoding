/* WAP to print following pattern
        5
      45 
    345
  2345  
12345
*/

#include<stdio.h>
int main (){
for(int i=5;i!=0;i--){
for(int j=i-1;j!=0;j--){
printf(" ");
}
for(int k=i;k<=5;k++){
printf("%d",k);
}
printf("\n");
}
return 0;
} 
