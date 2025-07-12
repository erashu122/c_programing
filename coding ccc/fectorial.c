#include<stdio.h>
intdisply(int);
int main(){
	int n;
	printf("enter the no of n ");
	scanf("%d",n)
	display (int n);
	return 0;
}
intdisplay(int n)
{
	if(n>1)
	return;
	else
	{
		printf("%d",n);
		display(n*(n-1));
		printf("%d",n);
	}
}
