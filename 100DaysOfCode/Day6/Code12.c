//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    int num;
    printf("Enter no.:");
    scanf("%d",&num);
    
    if(num>=0){
        if(num==0){
            printf("No. is ZERO/n");
        }
        else{
            printf("No. is POSITIVE/n");
        }}
    else{
        printf("No. is NEGATIVE/n");
    }
    return 0;
}