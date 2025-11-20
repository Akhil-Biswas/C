#include<stdio.h>
#include<conio.h>
void add();
void main() {
    clrscr();
    add();
    getch();
}

void add() {
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    sum =a+b;
    printf("Sum: %d",sum);
}

/*
------- OUTPUT -------
Enter two numbers: 243,25
Sum: 268
*/