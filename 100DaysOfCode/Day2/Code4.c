// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float area;
area = pi*radius*radius;
    printf("AREA= %f\n", area);
    
    float circumference;
circumference = 2*pi*radius;
    printf("Circumference= %f\n",circumference);
    return 0;
}

