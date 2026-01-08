// ########################################
// WAP to input length and breadth of a rectangle and find the area and perimeter.
// ########################################
#include <stdio.h>
#include <conio.h>

void main() {
    float l, b, area, perimeter;
    clrscr();
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
    getch();
}