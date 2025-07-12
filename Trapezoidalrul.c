#include<stdio.h>
float f(float x)
{
    return (log(x)*log(x));
}
int main()
{
    int i,n;
    float a,b,h,s=0,t ;
    printf("Enter lower limt");
    scanf("%f",&a);
    printf("Enter upper limt !");
    scanf("%f",&b);
    printf("\n enter the number of sub-interval !");
    scanf("%d",&n);
    h=fabs(b-a)/n;
    for(i=1;i<=n-1;i++)
    {
        s=s+f(a+i*h);
    }
    t=(h/2)*(f(a)+f(b)+2*s);
    printf("\n THE INTEGRAL IS :%f\n",t);
}