#include<stdio.h>
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
main(){
for(int i=1;i<=10;i++){

	int result = fib(i);
	printf("\n# %d fibnochi number =  %d",i,result);
}
}
