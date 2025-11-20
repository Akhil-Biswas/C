#include<stdio.h>
#include<conio.h>

void find();

void main() {
    clrscr();

    find();
    find();
    getch();
}

void find() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
        printf("%d+",i);
            sum = sum+i;
        }
    }

    if (sum == n) {
        printf("\n%d is a perfect number.\n", n);
    }
    else {
        printf("\n%d is not a perfect number.\n", n);
    }
}

/*
------- OUTPUT -------
Enter a number: 28
1+2+4+7+14+
28 is a perfect number.
Enter a number: 30
1+2+3+5+6+10+15+
30 is not a perfect number.
*/