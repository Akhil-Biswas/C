//  ++++++++++++++++++++++++++++++++++++++++++++++++
//  Q.2) WAP using Nested if to find the oldest brother amoung three.

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter Ram age: ");
    scanf("%d",&x);
    printf("Enter Shyam age: ");
    scanf("%d",&y);
    printf("Enter Ajay age: ");
    scanf("%d",&z);

if (x>y){
    if (x>z){
    printf("Ram is Older%d",x);
}
else
printf("Ajay is Oldest %d",z);
}

else {
    if(y>z){
    printf("Shyam is oldest %d",y);}
    else 
    printf("Ajay is oldest %d",z);
}
        return 0;
}

// ----------------OUTPUT---------------------
// Enter Ram age: 12
// Enter Shyam age: 23
// Enter Ajay age: 10
// Shyam is oldest 23
