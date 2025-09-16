//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c || b+c>a || a+c>b){
        {printf("Triangle is valid\n");}
        if (a==b || b==c || c==a){
        printf("Triangle is isosceles");}
        else if (a==b && b==c){
        printf("Triangle is equilateral");}
        else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
        printf("Triangle is right angled traingle");}
        else {
        printf("Triangle is scalene");}
    }
    else 
    printf("Triangle is not Valid");
    return 0;
}