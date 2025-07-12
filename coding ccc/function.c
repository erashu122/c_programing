#include<stdio.h>
void main(){

	int volume(int a,int b,int c){
		int d;
		d=a*b*c;
		return d;
	}
	int main(){
		int e,f,s;
		 e=12,f=13 ,s=5;
		int g=volume(e,f,s)
		printf("volume is= %d",&g);
	}
}
