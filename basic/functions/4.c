#include<stdio.h>
#include<conio.h>
void fib();
void palindrome();

void main() {
    clrscr();
    fib();
    palindrome();
    getch();
}
void fib() {
    int oldfib2=0,oldfib1=1,fib=0;
    int i,t;
    printf("Enter number of tearm:");
    scanf("%d",&t);

    printf("0,1,");
    for (i=2; i<=t; i++) {
        fib=oldfib2+oldfib1;
        oldfib2=oldfib1;
        oldfib1=fib;
        printf("%d,",fib);
    }
}

void palindrome() {
    int n=0,orignal=0,reverse=0;
    printf("Enter your number to check palindrome no.:");
    scanf("%d",&n);
    //reverse that number
    orignal=n;
    while(n!=0) {
        reverse=reverse*10;
        //printf("shift:%d\n",reverse);
        reverse=reverse+ n%10;
        n = n/10;
        //printf("add:%d\n",reverse);
    }
    if(orignal==reverse) {
        printf("%d is palindrome number",orignal);
    } else {
        printf("%d is not a palindrome number",orignal);
    }
}

/*
------- OUTPUT -------
Enter number of tearm:11
0,1,1,2,3,5,8,13,21,34,55,89,
Enter your number to check palindrome no.:454
454 is palindrome number
Enter your number to check palindrome no.:451
451 is not a palindrome number
*/