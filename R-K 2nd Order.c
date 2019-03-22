#include<stdio.h>
#include<conio.h>
#define f(x,y) (a*(x)+b*(y))
void main()
{
     int i,n;
     float h,x0,x,y0,a,b,k1,k2,k,y1;
     printf("R-K 2nd order method \n");

     printf("Enter the number of iteration n \n");
     scanf("%d",&n);



     printf("Enter the value of co-efficient a\n");
     scanf("%f",&a);
     printf("Enter the value of co-efficient b\n");
     scanf("%f",&b);



     printf("Enter the value of x0\n");
     scanf("%f",&x0);
     printf("Enter the value of y0 \n");
     scanf("%f",&y0);
      printf("Enter the value of x\n");
     scanf("%f",&x);


    h=(x-x0)/n;
    printf("The value of h is %f\n",h);

     for(i=0;i<n;i++)
     {
       k1=h*f(x0,y0);
      printf("The value of k1 is %f\n",k1);
      k2=h*f(x0+h,y0+k1);
      printf("The value of k2 is %f \n",k2);
      k=(0.5)*(k1+k2);
     printf("The value of k is %f \n",k);
     y1=y0+k;
     printf("The value of y1 is %f \n",y1);

     x0=x0+h;
     y0=y1;
  }
}
