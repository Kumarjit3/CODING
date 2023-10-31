#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;  float xrr[10],yrr[10],f,x,x0,x1,x2,x3;
    printf("Enter the nuber of item of f(x):- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("x[%d]= ",i);  scanf("%f",&xrr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("y[%d]= ",i);  scanf("%f",&yrr[i]);
    } 
    printf("Enter the value of x:- ");
    scanf("%f ",&x);
     
    /*f =( ((((x-xrr[1])*(x-xrr[2])*(x-xrr[3]))/((xrr[0]-xrr[1])*(xrr[0]-xrr[2])*(xrr[0]-xrr[3])))*yrr[0]) +
         ((((x-xrr[0])*(x-xrr[2])*(x-xrr[3]))/((xrr[1]-xrr[0])*(xrr[1]-xrr[2])*(xrr[1]-xrr[3])))*yrr[1]) +
         ((((x-xrr[0])*(x-xrr[1])*(x-xrr[3]))/((xrr[2]-xrr[0])*(xrr[2]-xrr[1])*(xrr[2]-xrr[3])))*yrr[2]) +
         ((((x-xrr[0])*(x-xrr[1])*(x-xrr[2]))/((xrr[3]-xrr[0])*(xrr[3]-xrr[1])*(xrr[3]-xrr[2])))*yrr[3]) ) ;*/


         x0 = ((((x-xrr[1])*(x-xrr[2])*(x-xrr[3]))/((xrr[0]-xrr[1])*(xrr[0]-xrr[2])*(xrr[0]-xrr[3])))*yrr[0]);
         x1 = ((((x-xrr[0])*(x-xrr[2])*(x-xrr[3]))/((xrr[1]-xrr[0])*(xrr[1]-xrr[2])*(xrr[1]-xrr[3])))*yrr[1]);
         x2 = ((((x-xrr[0])*(x-xrr[1])*(x-xrr[3]))/((xrr[2]-xrr[0])*(xrr[2]-xrr[1])*(xrr[2]-xrr[3])))*yrr[2]);
         x3 = ((((x-xrr[0])*(x-xrr[1])*(x-xrr[2]))/((xrr[3]-xrr[0])*(xrr[3]-xrr[1])*(xrr[3]-xrr[2])))*yrr[3]);

         f = (x0+x1+x2+x3);
         
        printf("f(10) = %f ",f);
         return 0;
}