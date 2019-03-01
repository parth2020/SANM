#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(1/(1+x));
}
int main()
{
    int i,n;
    float x0,xn,h,y[20],sum1,sum2,intval,x[20];
    printf("\n Enter values of lower limit a:");
    scanf("%f",&x0);
    printf("\n Enter values of upper limit b:");
    scanf("%f",&xn);
    printf("\n Enter values of step size h such that n stays even:");
    scanf("%f",&h);
    n=(xn-x0)/h;
    if(n%2==1)
    {
        n=n+1;
    }
    h=(xn-x0)/n;
    printf("\n Refined value of n and h are:\n n = %d \n h = %f \n",n,h);
    printf("\n X and Y values are: \n");
    for(i=0; i<=n; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("\n%f     %f\n",x[i],y[i]);
    }
    sum1=0;
    sum2=0;
    for(i=1; i<n; i++)
    {
        if(i%2==0)
        {
            sum1=sum1+y[i];
        }
        else
        {
            sum2=sum2+y[i];
        }

    }
    intval=h/3*(y[0]+y[n]+2*sum1+4*sum2);
    printf("\n Final integration is I = %f",intval);

    getch();
}
