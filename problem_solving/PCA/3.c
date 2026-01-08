// ########################################
// WAP to input two numbers and interchange their value.
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,temp;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before Interchanging: a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After Changing: a = %d, b = %d\n",a,b);
    getch();
}