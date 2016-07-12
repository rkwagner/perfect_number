#include <stdio.h>

void main(){

    int n, i, sum=0;

    printf("Enter a number to check if it is perfect: ");
    scanf("%d", &n);

    for(i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }

    if(sum==n){
        printf("%d is perfect.\n", n);
    }
    else{
        printf("%d is NOT perfect.  Sum is %d.\n", n, sum);
    }
}
