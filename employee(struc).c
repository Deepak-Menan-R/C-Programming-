#include<stdio.h>
#include <stdlib.h>
typedef struct{
	char empname[30];
	int age,ph;
	double salary;
}Employee;
int main(){
	int i;
	Employee employees[20];
	printf("Enter employee details\n");
	for( i=0; i<3; i++){
        printf("Employee %d:- \n",i+1);
		printf("Name: ");
        scanf("%[^\n]s",employees[i].empname);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Phone Number: ");
        scanf("%d",&employees[i].ph);
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        char ch = getchar();
        printf("\n");
    }
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<3; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].empname);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone Number \t: ");
        printf("%d \n",employees[i].ph);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
    return 0;
}
