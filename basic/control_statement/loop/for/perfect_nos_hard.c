#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=0;                      // Reset step is imp
        for(int j=1;j<i;j++){       // j always less than i
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(i==sum){             // printing i inside 1st loop
            printf(" %d ",i);
        }
    }
}