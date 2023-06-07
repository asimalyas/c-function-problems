#include<stdio.h>
int fact(int number);
int printPascalTriangle(int);
int	main(){
		int row;
		scanf("%d",&row);
		printPascalTriangle(row);
		return 0;
}
int fact(int number){
	int fact=1;
	for(int i=1;i<=number;i++){
		fact*=i;
	}
	return fact;
}
int printPascalTriangle(int limit)
{
	for(int row =0;row<limit;row++)
	{
		for(int space=0;space<limit-row;space++){
			printf(" ");
		}
		for(int column=0;column<=row;column++){
			printf("%d ",fact(row)/(fact(column)*fact(row-column)));
		}
		printf("\n");
	}
	}
