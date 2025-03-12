#include<stdio.h>
int main(){
	int a=0,b=1,c=0,n;
	printf("Enter the number of terms\n ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}