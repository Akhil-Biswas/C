//++++++++++++++++++++++
// Q. WAP to print 1-10 in ascending order & 10-1 in descending order.
//++++++++++++++++++++++

#include<stdio.h>
#include<conio.h>
void ascending () {
    int i=1;
    for(i; i<=10; i++) {
        printf("%d,",i);
    }
}

void descending() {
    int i=10;
    for(i; i>=1; i--) {
        printf("%d,",i);
    }

}

void main() {
    clrscr();
    ascending ();
    descending();
    getch();
}

/*
------- OUTPUT -------
1,2,3,4,5,6,7,8,9,10,10,9,8,7,6,5,4,3,2,1
*/