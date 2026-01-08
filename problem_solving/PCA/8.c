// ########################################
// WAP to input a number and check whether the number is divisible by 5 and 3 or not.
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5==0 && num%3==0){
        printf("%d is divisible by 5 and 3",num);
    }
    else{
        printf("%d is not divisible by 5 and 3",num);
    }
    getch();
}