#include<stdio.h>
#include<math.h>
double f(double x){
  return sqrt(1-0.162*(sin(x)*sin(x)));
}
 
main(){
  int n,i ,m;
  double a,b,h,x,s=0,integral;
  printf("\nEnter the no. of sub-intervals(EVEN): ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%lf",&a);
  printf("\nEnter the final limit: ");
  scanf("%lf",&b);
  h = (b-a)/n;
  m=n/6;
    s=0;
    if(n%6==0){
    	for(i=1;i<=m;i++)
    	{s=s+(3*h/10)*(f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h));
    	a=a+6*h;}
    	printf("Value of integral is %f\n", s);
    }
		else{
			printf("Sorry ! Weddle rule is not applicable");
		}
	

    return 0;
    }

