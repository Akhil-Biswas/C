// ########################################
// WAP to input 3 sides of a triangle and print its type (Equilateral/Isosceles/Scalene).
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,c;
    clrscr();
    printf("Enter 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || a==c){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
    getch();
}