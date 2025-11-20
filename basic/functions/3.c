//++++++++++++++++++++++
// Q. WAP to check odd-even and positive-negative. Implement modular program
//++++++++++++++++++++++

#include<stdio.h>
#include<conio.h>
void oddeven();
void positivenegative();

void main() {
    clrscr();
    oddeven();
    positivenegative();
    getch();
}
void oddeven() {
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n%2==0) {
        printf("%d is even",n);
    } else {
        printf("%d is odd",n);
    }
}

void positivenegative() {
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n==0) {
        printf("Zero is neither positive nor negative.");
    } else if (0<n) {
        printf("%d is positive number",n);
    }else {
        printf("%d is negative number",n);
    }
}

/*
------- OUTPUT -------
Enter your number:23
23 is oddEnter your number:-23
-23 is negative number
*/