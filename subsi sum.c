#include<stdio.h>
int main(){
	int arr[10];
	int n=10;
	
	printf("Enter 10 two digit number:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("pairs of number whose sum is 70:\n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==70){
				printf("%d+%d=70\n",arr[i],arr[j]);
				
			}
		}
	}
	return 0;
}
