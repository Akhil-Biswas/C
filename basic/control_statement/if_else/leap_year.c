#include<stdio.h>
int main()
{
    int n;
printf("Enter Year:\n");
scanf("%d",&n);
if (n%400==0 || n%4==0  && n%100!=0) 
printf("LEAP YEAR");
else 
printf("NON LEAP YEAR");




return 0;
}