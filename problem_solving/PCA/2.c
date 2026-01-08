// ########################################
// WAP to input radius of a circle and find area and circumference of the circle.
// ########################################
#include <stdio.h>
#include <conio.h>

void main(){
    const float PI = 3.1416;
    float r, area, circumference;
    clrscr();
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("Area of circle: %f\n", area);
    printf("Circumference of circle: %f\n", circumference);
    getch();
}