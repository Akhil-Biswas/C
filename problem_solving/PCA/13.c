// ########################################
// WAP to input marks of 5 subjects, find average and assign grade.

//      Average Marks |	Grade
//      ---------------------
//      90 & above	  |   A
//      80–89   	  |   B
//      70–79	      |   C
//      Below 70      |   F
// ########################################
#include <stdio.h>
#include <conio.h>
void main(){
    int m1,m2,m3,m4,m5;
    float average;
    clrscr();

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    average = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Average Marks: %.2f\n", average);
    
    if(average >= 90){
        printf("Grade: A");
    }else if(average >= 80){
        printf("Grade: B");
    }else if(average >= 70){
        printf("Grade: C");
    }else{  
        printf("Grade: F");
    }
    getch();
}