#include<stdio.h>
float f(float x)
{
	return (x*x*x)-(4*x)-9;
}
float bisection(float a,float b, float tolerance)
{
	if(f(a)*f(b>=0))
	printf("bisection method can't be applide in interval");
	return ;
}
float c;
	while ((b-a)>=tolerance))
{
	c=(a+b)/2;
	if(f(c)==0)
	{
		return c;
	}
	else if (f(c)*f(a)<0)
	{
		b=c;
	}
	else{
		a=c;
	}
	return c;
}
int main()
{
	float a,b,tolerance,root;
	printf("enter the interval[a,b]");
	scanf("%f%f",&a, &b);
	printf("enter the tolerance");
	scanf("%f"&tolerance);
	root=bisection(a,b,tolerance);
	printf("%f",&root);
	return 0;
}
