
//  ++++++++++++++++++++++++++++++++++++++++++++++++
//  Q.2) To Find greatest number Amoung Three number

#include<stdio.h>
int main()
{
    int a,b,c;
   printf("Enter 3 Numbers:\n");
   scanf("%d %d %d",&a,&b,&c);
   if (a>b && a>c){
   printf("%d is greatest",a);}
   if (b>a && b>c){
   printf("%d is greatest",b);}
   if (c>b && c>a){
   printf("%d is greatest",c);}
   
   return 0;
}

//  ---------OUTPUT------------
//  Enter 3 Numbers:
//  20 11 19
//  20 is greatest
