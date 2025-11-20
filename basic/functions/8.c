#include<stdio.h>
#include<conio.h>
void fact();
void main() {
    clrscr();
    fact();
    getch();
}

void fact() {
    int n,f=1;
    int i;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        printf("%d*",i);
        f=f*i;
    }
    printf("\nSum: %d",f);
}


/*
------- OUTPUT -------
Enter number: 10
1*2*3*4*5*6*7*8*9*10*
Sum: 3628800
*/