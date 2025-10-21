
// ++++++++++++++++++++++++++++++++++++++++++
// Q. WAP To find the Second largest number amoung three number.

#include<stdio.h>
int main()
{
    int a,b,c;
  printf("Enter First Number:"); 
  scanf("%d",&a); 
  printf("Enter Second Number:"); 
  scanf("%d",&b); 
  printf("Enter Third Number:");
  scanf("%d",&c);
  int second;
  if (a<b && a>c || a<c && a>b)
    second=a;
  else if (b<a && b>c || b<c && b>a)
    second=b;
    else
    second=c;
    printf("%d is Second Largest",second);

    return 0;
}

// --------------OUTPUT----------------------
// Enter First Number:20
// Enter Second Number:12
// Enter Third Number:15 
// 15 is Second Largest