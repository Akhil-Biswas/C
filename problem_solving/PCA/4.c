// ########################################
// WAP to input a three digit number and find the sum of digits.
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int num, sum, d1, d2, d3;
    clrscr();
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    sum = d1 + d2 + d3;

    printf("The sum of the digits is: %d\n", sum);
    getch();
}