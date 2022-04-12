#include <stdio.h>  
int main()  
{  
   int mark;
   printf("Enter mark : ");
   scanf("%d",&mark);    
  (mark>=85)?(printf("Grade A")):(mark>=70)?(printf("Grade B")):(mark>=55)?(printf("Grade C")):
  (mark>=40)?(printf("Grade D")):(printf("Grade F"));  
    return 0;  
}  
