
// ++++++++++++++++++++++++++++++++++++++
// Q. WAP to Check Prime number.

#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    if (n<=1){
        printf("Not applicable");
    }
    for(int i=2;i<=n-1;i++){
    
    if(n%i==0){
       a=1;
       break;
}
    }
    if(a==0)
        printf("Prime number");
    else printf("Composite");



    return 0;
}
// ------------OUTPUT--------------------
// Enter Number:13
// Prime Number