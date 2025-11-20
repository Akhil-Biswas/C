#include<stdio.h>
#include<conio.h>
int add();
void  main() {
    int sum=0;
    clrscr();
    sum= add();
    printf("sum: %d",sum);
    getch();
}

int add() {
    int a,b,s=0;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    s =a+b;
    return s;
}

/*
------- OUTPUT -------
Enter two numbers: 25,50
Sum: 75
*/