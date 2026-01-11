// ########################################
// WAP to input 3 numbers and find the largest using conditional operator.
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,c,largest;
    clrscr();
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    // if (a >= b && a >= c){
    //     largest = a;
    // }
    // else if (b >= a && b >= c){
    //     largest = b;
    // }
    // else{
    //     largest = c;
    // }
    largest = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    printf("Largest number is: %d", largest);
    getch();
}
