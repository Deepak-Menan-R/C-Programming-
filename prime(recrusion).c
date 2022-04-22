#include<stdio.h>
int n,i;
int prime(int i, int n){
    if(n==i)
        return 0;
    else
        if(n%i==0)
            return 1;
    else{
        return prime(i+1,n);
    }
}
int main(){
    printf("Enter your Number:");
    scanf("%d",&n);

    if(prime(2,n)==0)
        printf("It is a Prime Number.");
    else
        printf("It is not a Prime Number.");
}
