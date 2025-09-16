//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    int L,B, perimeter,area;
    printf("Enter length");
    scanf("%d", &L);
    printf("Enter breadth");
    scanf("%d", &B);
perimeter= 2*(L+B);
    printf("The perimeter is: %d\n", perimeter);
area =L*B;
    printf("The Area is: %d\n", area); 
    return 0;
 }