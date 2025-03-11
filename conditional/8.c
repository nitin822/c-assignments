#include<stdio.h>
int main(){
	int a,b,sum,pro,sub,n;
	float div;
	printf("Enter 2 Numbers\n");
	scanf("%d%d",&a,&b);
	printf("Select the operation you want to perform\nPress:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	sum = a+b;
	sub= a-b;
	pro=a*b;
	div=a/b;

	scanf("%d",&n);
	switch(n){
		case 1: printf("%d is the resulted sum",sum);
			break;
		case 2: printf("%d is the resulted sum",sub);
			break;
		case 3: printf("%d is the resulted product",pro);
			break;
		case 4: printf("%f is the resulted division",div);
			break;
		case 5 : printf("Please provide a valid input");
			  break;
	}
	
	return 0;
}