#include<stdio.h>
#include<stdlib.h>
void push(int[],int);
int pop(int s[]);
int main(){
	int sAr[100],tos=-1;
	int val;
	printf("Enter the value:",val);
	
	scanf("%d",&val);
	push(&sAr[0],val);
	return 0;
}
void push(int sp[100],int item)

{
	int tos;
	if(tos<99)
	{
		sp[++tos]=item;
		printf("\n next valu %d inserted at location %d",item,tos+1);
		
	}
	else{
		return;
	}
}
