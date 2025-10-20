/*
Problem Statement:
Write a program to input two numbers and display their sum.

Sample Test Case 1:
Input: 3 5
Output: 8

Sample Test Case 2:
Input: 6 9
Output: 15

Sample Test Case 3:
Input: 10 20
Output: 30
*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);

    return 0;
}