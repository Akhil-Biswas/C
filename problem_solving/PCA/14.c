// ########################################
// WAP to input consumed unit and calculate Electricity Bill (Monthly rent ₹300).

//      Consumed Unit |	Charge per unit (Rs.)
//      First 300	  |           7
//      Next 500	  |           9
//      Next 700	  |           12
//      1501 & above. |           15
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int units = 0, bill = 300;
    clrscr();
    printf("Enter consumed units: ");
    scanf("%d",&units);
    if(units <= 300){
        bill = bill + (units * 7);
    }
    else if(units <= 700){
        bill = bill + (300 * 7) + ((units - 300) * 9);
    }
    else if(units <= 1500){
        bill = bill + (300 * 7) + (500 * 9) + ((units - 700) * 12);
    }
    else{
        bill = bill + (300 * 7) + (500 * 9) + (700 * 12) + ((units - 1500) * 15);
    }
    printf("Total Electricity Bill: Rs.%d", bill);
    getch();
}