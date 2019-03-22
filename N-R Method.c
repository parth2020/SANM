#include<stdio.h>
#include<conio.h>
#define F(x) (A*x*x*x*x+B*x*x+C*x+D)
#define Fd(x) (4*A*x*x*x+B*2*x+C)
int main()
{
    float A,B,C,D,x0,x1,i=0,temp,x,x2,X0,X1;

    printf("\n\t\t\t\t\t Newtons Raption Method ");
    printf("\nHere the equation is: Ax4+Bx2+Cx+D");
    printf("\n In this equation Enter the value of co-efficients");
    printf("\n A:");
    scanf("%f",&A);
    printf("\n B:");
    scanf("%f",&B);
    printf("\n C:");
    scanf("%f",&C);
    printf("\n D:");
    scanf("%f",&D);
    printf("\n x0:");
    scanf("%f",&x0);
    printf("\n x1:");
    scanf("%f",&x1);
    printf("\n  F(x0): %f",F(x0));
    printf("\n  F(x1): %f",F(x1));

    while(F(x0)*F(x1)>0)
    {
    printf("\n Enter the value of again ");
    printf("\n x0:");
    scanf("%f",&x0);
    printf("\n x1:");
    scanf("%f",&x1);
    printf("\n  F(x0): %f",F(x0));
    printf("\n  F(x1): %f",F(x1));
    }
    X0=(x0+x1)/2;
        printf("\n X0 is %f ",X0);
         X1 = X0-(F(X0)/Fd(X0));
         printf("\n  Iteration X1 is %f  ",X1);

    do{

        X0 = X1;




         X1 = X0-(F(X0)/Fd(X0));

         printf("\n Iteration X1 is %f  ",X1);


    }while( fabs(X1-X0)>0.0001 );

    printf("\n Root is %f",X1);

}
