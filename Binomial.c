#include<stdio.h>
#include<conio.h>
#include<math.h>
int facto(int n)
{
            return (n==1 || n==0) ? 1 : facto(n-1)*n;
}
int main()
{
            int n,r,x,l,nr,factN,factR,factNR,factX;
            double p,result1;
            printf("Binomial Distribution\n");
            printf("enter the value of n:");
            scanf("%d",&n);
            printf("enter the value of r:");
            scanf("%d",&r);
            printf("enter the value of p:");
            scanf("%lf",&p);
            nr=n-r;
            factN=facto(n);
            factR=facto(r);
            factNR=facto(nr);
            result1=((factN/(factR*factNR))*pow(p,r)*(pow((1-p),nr)));
            printf("\n result=%f",result1);
            getch();
}

