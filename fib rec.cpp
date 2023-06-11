#include<stdio.h>
void printFibnochi(int num1,int num2,int limit){
	if(limit<0){
		return;
	}
	int c=num1+num2;
	printf("%d ",c);
	printFibnochi(num2,c,limit-1);
}
main(){
	int num1=0,num2=1;
	int limit;
	scanf("%d",&limit);
	printf("%d %d ",num1,num2);
	printFibnochi(num1,num2,limit);
}
