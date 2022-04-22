#include<stdio.h>
//To print from 1 01 101...Exchange the position of 1 and 0.
main(){
	int i,j,row;
	printf("Enter number of rows to be printed : ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<=i;j++){
			if((i+j)%2==0){
				printf("0");
			}else{
				printf("1");
			}printf("\t");
		}printf("\n");
		
	}
}
