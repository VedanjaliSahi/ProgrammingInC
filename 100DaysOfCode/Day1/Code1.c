//Write a program to input two numbers and display their sum.

#include <stdio.h>
int main(){
    int a,b,sum;
    printf("enter first no. :");
    scanf("%d", &a);
    printf("enter second no.:");
    scanf("%d", &b);
sum = a+b;
    printf("SUM= %d\n", sum);
    return 0;
}