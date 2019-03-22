#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,i,j;
printf("Enter total no. of element:");
scanf("%d",&n);
float a[n],mean,median,sum=0.0,temp;
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{scanf("%f",&a[i]);
  sum=sum+a[i];}
mean=sum/n;
printf("\nMean value= %f",mean);
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
  { if(a[i]<a[j])
    { temp=a[i];
      a[i]=a[j];
     a[j]=temp;
    }
  }
}
printf("\nAfter Sorting:\n\n ");
for(i=0;i<n;i++)
{ printf("%f\t\n",a[i]);}
if((n%2)!=0)
{ median=a[n/2];}
else
{ median=(a[(n/2)-1]+a[n/2])/2;}
printf("\nMedian value= %f",median);
getch();
}
