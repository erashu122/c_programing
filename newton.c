#include <stdio.h>
int main()
{
    int i ,j ,k ,n;
    float num=1;
    float denm = 1;
    float x[100], y[100],d[100][100], xn;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("Enter the values of x and y:");
    for(i=0;i<=n;i++){
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("Enter the valu of xn ");
    scanf("%f",&xn);
    float h=x[1]-x[0];
    for(i=0; i<n ; i++)
    {
        d[i][1] = y[i+1]-y[i];

    }
    for(j=2; j<= n; j++){
        for(i=0;i<=n-j; i++)
        {
            d[i][j]=d[i+1][j-1]-d[i][j-1];
        }
    }
    i=0;
    while (i<n && x[i]<=xn)
    {
        i++;
    }
    i--;
    float u=(xn-x[i])/h;
    float yp=y[i];
    for (k=1;k<=n;k++){
        num=num*(u+k-1);
        denm=denm*k;
        yp=yp+(num/denm)*d[i][k];

    }
    printf("The final result id %f",yp);
    return 0;
    

}