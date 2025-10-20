/* Write a program to calculate simple and compound interest for given principal, rate and time.

Input 1 : 1000  5  2
Output 1 : simple interest = 100 , compound interest = 102.5

Input 2 : 5000  7  3
Output 2 : simple interest = 1050 , compound interest = 1125.76

*/

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float simpleinterest, compoundinterest;

    printf("Enter principal amount,rate of interest,time : ");
    scanf("%f %f %f", &principal , &rate ,&time);
    

    simpleinterest = (principal * rate * time) / 100;

    compoundinterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);

    return 0;
}