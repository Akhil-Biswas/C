// ########################################
// 	WAP to input a number and check whether the number is 2 digit number or not.
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 99){
        printf("%d is a 2 digit number.", num);
    }
    else{
        printf("%d is not a 2 digit number.", num);
    }
    getch();
}