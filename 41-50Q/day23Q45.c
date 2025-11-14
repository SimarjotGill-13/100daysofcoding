/* WAP to find the sum of the series : 2/3 + 4/7 + 6/11 + 8/15 + .... upto n terms 
input 1 :3
output 1: 1.78
input 2 : 5
output 2: 2.84
*/
#include <stdio.h>
int main() {
    int n,i;
    float numerator = 2.0 ,denominator = 3.0, sum = 0.0;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for (i=1; i<= n ; i++) {
        sum += (numerator / denominator);
        numerator += 2;
        denominator += 4;
    }
    printf("Sum of the series = %.2f\n", sum);
    return 0;
}
