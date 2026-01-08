// ########################################
// WAP to input a number and check whether the number is odd or even using if.
// ########################################
#include <stdio.h>
#include <conio.h>
int main(){
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is an even number.", num);
        printf("%d is odd number.", num);
    getch();
}