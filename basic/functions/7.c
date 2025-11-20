//++++++++++++++++++++++
// Q. WAP to input 4 degit number & find the the sum of digits.
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void add();
void main() {
    clrscr();
    add();
    getch();
}

void add() {
    int n,sum=0;
    int d1000,d100,d10,d0;
    printf("Enter number: ");
    scanf("%d",&n);
    d0=n%10;
    d10=(n/10)%10;
    d100=(n/100)%10;
    d1000=n/1000;
    sum =d1000+d100+d10+d0;
    printf("Sum: %d",sum);
}

/*
------- OUTPUT -------
Enter number: 2355
Sum: 15
*/