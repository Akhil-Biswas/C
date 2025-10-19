

//++++++++++++++++++++++
// Q.01 To check given alphabet is vowel or constant
//++++++++++++++++++++++

#include<stdio.h>
int main()
{
    char t;
    printf("Enter Alphabet:\n");
    scanf("%c",&t);
    if(t=='a' || t=='A' || t=='e' || t=='E'
    || t=='i' || t=='I' || t=='o' || t=='O' ||t=='u' ||
t=='U')
{printf("%c is Vowel",t);}
else
printf("%c is consonant",t);



    return 0;
}

/*
------- OUTPUT -------
Enter Alphabet:
a
a is Vowel
*/