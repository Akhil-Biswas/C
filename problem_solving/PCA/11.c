// ########################################
// WAP to input 3 numbers and find the second smallest.
// ########################################
#include <stdio.h>
#include <conio.h>
int main(){
    int a, b, c, second_smallest;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a <= b && a >= c) || (a >= b && a <= c)) {
        second_smallest = a;
    } else if ((b <= a && b >= c) || (b >= a && b <= c)) {
        second_smallest = b;
    } else {
        second_smallest = c;
    }
    printf("%d, %d, %d\n", a, b, c);
    printf("The second smallest number is: %d\n", second_smallest);
    getch();
}