//++++++++++++++++++++++
// Q.01 1 + 2² + 3² + 4² + 5² + 6² +....+ n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,2); // pattern
        sum+=i*i;
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2 +

 SUM: 385
*/



//++++++++++++++++++++++
// Q.02 1 + 2⁵ + 3⁵ + 4⁵ +....+ n⁵
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,5); // pattern
        sum+=i*i*i*i*i;
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^5 + 2^5 + 3^5 + 4^5 + 5^5 + 6^5 + 7^5 + 8^5 + 9^5 + 10^5 +

 SUM: 220825
*/



//++++++++++++++++++++++
// Q.03 1 + 3⁸ + 5⁸ + 7⁸ + ....+ n⁸
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i+=2) {
        printf("%d^%d + ",i,8); // pattern
        sum+=pow(i,8);
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^8 + 3^8 + 5^8 + 7^8 + 9^8 +

 SUM: 49208709
*/



//++++++++++++++++++++++
// Q.04 1 + 2² + 3³ + 4⁴ + 5⁵ + 6⁶ +....+ n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,i); // pattern
        sum+=pow(i,i);
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^1 + 2^2 + 3^3 + 4^4 + 5^5 + 6^6 + 7^7 + 8^8 + 9^9 + 10^10 +

 SUM: 2147483647
*/
// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.5 1 + 2³ + 3⁴ + 4⁵ +....+ n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,i+1); // pattern
        sum+=pow(i,(i+1));
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^2 + 2^3 + 3^4 + 4^5 + 5^6 + 6^7 + 7^8 + 8^9 + 9^10 + 10^11 +

 SUM: 2147483647
*/
// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.6 1 + 2² + 3⁴ + 4⁶ + 5⁸ + ....+ n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,(i-1)*2); // pattern
        sum+=pow(i,(i-1)*2);
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^0 + 2^2 + 3^4 + 4^6 + 5^8 + 6^10 + 7^12 + 8^14 + 9^16 + 10^18 +

 SUM: 2147483647
*/
// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.7 1 + 2⁵ +3¹⁰ + 4¹⁵ + 5²⁰ + .....+ n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i,i*5); // pattern
        sum+=pow(i,i*5);
    }
    printf("\n\n SUM: %d",sum);
}
/*
------- OUTPUT -------
Pattern:
1^5 + 2^10 + 3^15 + 4^20 + 5^25 + 6^30 + 7^35 + 8^40 + 9^45 + 10^50 +

 SUM: 2147483647
*/
// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.8 2³+4⁶+6⁹+8¹².....n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        printf("%d^%d + ",i*2,i*3); // pattern
        sum+=pow(i*2,i*3);
    }
    printf("\n\n SUM: %d",sum);
}

/*
------- OUTPUT -------
Pattern:
2^3 + 4^6 + 6^9 + 8^12 + 10^15 + 12^18 + 14^21 + 16^24 + 18^27 + 20^30 +

 SUM: 2147483647
*/
// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.09 -2⁵ + 4¹⁰ - 6¹⁵ + 8²⁰ - .... + n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    int t=10,sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
        if (i%2 ==0) {
            printf("%d^%d + ",i*2,i*5); // pattern
            sum+=pow(i*2,i*3);
        } else {
            printf("%d^%d + ",i*-2,i*5); // pattern
            sum+=pow(i*-2,i*5);
        }
    }
    printf("\n\n SUM: %d",sum);
}

/*
------- OUTPUT -------
Pattern:
-2^5 + 4^10 + -6^15 + 8^20 + -10^25 + 12^30 + -14^35 + 16^40 + -18^45 + 20^50 +

 SUM: 2147483647
*/

// 📌 NOTES
//  ⚠️ limit of signed int is 32bits that is { (-2³¹ to 2³¹-1) => -2147483648 to 2147483647}
//  🧑‍🔧 Fix by Increaseing limit of sum variable

// 👩‍💻 ✅
//  Use :  long data Type for sum



//++++++++++++++++++++++
// Q.10 1 + 1/2 + 1/3 + 1/4 + ....+ 1/n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t=10;
    float sum=0;
    printf("Pattern:\n");
    for (i=1; i<=t; i++) {
            printf("1/%d + ",i); // pattern
            //sum+=1/i;
            sum+=1.0/i;
    }
    printf("\n\n SUM: %f",sum);
}

/*
------- OUTPUT -------
Pattern:
1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7 + 1/8 + 1/9 + 1/10 +

 SUM: 2.928968
*/

// 📌 NOTES
//  ⚠️ sum+=1/i; => sum is float, but 1 and i both integer data type
//  🕵️‍♀️ integer/integer is always integer
//  🕵️‍♀️ but, folat/integer is float

// 🧑‍🔧
//  sum+=1/i; ❌
//  sum+=1.0/i; ✅



//++++++++++++++++++++++
// Q.11 1/2 + 1/4 + 1/6 + ....+ 1/2n
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t=10;
    float sum=0;
    printf("Pattern:\n");
    for (i=2; i<=t; i+=2) {
            printf("1/%d + ",i); // pattern
            //sum+=1/i;
            sum+=1.0/i;
    }
    printf("\n\n SUM: %f",sum);
}

/*
------- OUTPUT -------
Pattern:
1/2 + 1/4 + 1/6 + 1/8 + 1/10 +

 SUM: 1.141667
*/

// 📌 NOTES
//  ⚠️ sum+=1/i; => sum is float, but 1 and i both integer data type
//  🕵️‍♀️ integer/integer is alway integer
//  🕵️‍♀️ but, folat/integer is float

// 🧑‍🔧
//  sum+=1/i; ❌
//  sum+=1.0/i; ✅



//++++++++++++++++++++++
// Q.12 1 - 1/3 + 1/6 - 1/9 +....+ 1/3(n-1)
//++++++++++++++++++++++
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t=10;
    float sum=1;
    printf("Pattern:\n");
    for (i=1; i<t; i++) {
        if (i%2 ==0) {
            printf("+1/%d ",3*i); // pattern
            //sum+=1/i;
            sum+=1.0/(3*i);
        } else {
            printf("-1/%d ",3*i); // pattern
            //sum+=1/i;
            sum-=1.0/(3*i);
        }

    }
    printf("\n\n SUM: %f",sum);
}
/*
------- OUTPUT -------
Pattern:
-1/3 +1/6 -1/9 +1/12 -1/15 +1/18 -1/21 +1/24 -1/27

 SUM: 17.666666
*/

// 📌 NOTES
//  ⚠️ sum+=1/i; => sum is float, but 1 and i both integer data type
//  🕵️‍♀️ integer/integer is alway integer
//  🕵️‍♀️ but, folat/integer is float

// 🧑‍🔧
//  sum+=1/i; ❌
//  sum+=1.0/i; ✅



/*
++++++++++++++++++++++

Author: Akhil Biswas

Github: https://github.com/Akhil-Biswas
Linkedin: https://www.linkedin.com/in/akhilbiswas-radhe
++++++++++++++++++++++
*/