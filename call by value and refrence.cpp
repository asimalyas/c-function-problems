#include<stdio.h>
void swapByvalue(int a,int b)
    {
	int c=a;
	a=b;
	b=c;
    }
void swapByRefrence(int &num1,int &num2){
	int c= num1;
	num1 = num2;
	num2 =c;
	
}
main()
{
	  int num1,num2;
	    printf("enter the two numbers\n:");
	  scanf("%d%d",&num1,&num2);
	  swapByvalue(num1,num2);
	  printf("\nswaping numbers by value\n num1=%d  num2= %d",num1,num2);
	  swapByRefrence(num1,num2);
	  printf("\nswaping numbers by refrence \n num1=%d  num2= %d",num1,num2);
}
