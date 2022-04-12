#include<stdio.h>
int main(){
int x,y;
printf("Enter a number for x :");
scanf("%d",&x);
printf("Enter a number for y :");
scanf("%d",&y);
printf("Value of x is %d and y is %d\n",x ,y);
printf("After swaping\n");
x=x+y;
y=x-y;
x=x-y;
printf("x = %d and y = %d",x,y);
return 0;
}
