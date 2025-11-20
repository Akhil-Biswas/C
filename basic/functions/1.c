//++++++++++++++++++++++
// Q. Write a code to print area of circle 3 time and your name 2 time.
//++++++++++++++++++++++

#include<stdio.h>
#include<conio.h>
void area() {
    int r;
    float pi =3.14,area;
    printf("Enter radius of circle");
    scanf("%d",&r);
    area = pi*r*r;
    printf("\nArea of Circle: %f",area);
}

void me() {
    printf("\nAkhil Biswas");
    printf("\nBca");
}

void main() {
    clrscr();
    area();
    me();
    area();
    me();
    area();
    getch();
}

/*
------- OUTPUT -------
Enter radius of circle:5

Area of Circle: 78.500000
Akhil Biswas
Bca
Enter radius of circle:10

Area of Circle: 314.000000
Akhil Biswas
Bca
Enter radius of circle:25

Area of Circle: 1962.500000
*/