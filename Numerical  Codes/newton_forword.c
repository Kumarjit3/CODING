#include<stdio.h>
#include<math.h>

float funch(float y[],float s)
{
    return (y[0]+s*y[1]+(s*(s-1)*y[2]/2)+(s*(s-1)*(s-2)*y[3]/6));
}

int main()
{
    float arr[10],y[10],s,y0; int i,k=1,j,n;

     printf("Enter the number of term of x:- "); scanf("%d",&n);
    printf("\nEnter the values of y0:- ");
    for(i=0; i<n; i++) { scanf("%f",&arr[i]); }
    y[0]=1;
    for(j=1; j<=n; j++)
    {
        for(i=0; i<n-j; i++)
        {
             y0 = (arr[i+1]-arr[i]); arr[i] = (arr[i+1]-arr[i]); 
             printf(" y0 = %f\n",y0); if(i==0) {  y[k++]=y0; } if((n-j)==1) { break; }
        }
    }
    for(i=0; i<=4; i++) { if(y[i]<=0) { break; } printf(" y[%d] = %f ",i,y[i]); }
    s=0.4;
    printf("\n");
   printf("f(1.4) = %f ",funch(y,s));
    return 0;

}