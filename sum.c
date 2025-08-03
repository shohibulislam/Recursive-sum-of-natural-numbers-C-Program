#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter your value:");
    scanf("%d",&n);
    printf("Sum of the first %d natural numbers is: %d",n ,sum(n));
}

int sum (int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}