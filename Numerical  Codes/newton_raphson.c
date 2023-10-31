#include<stdio.h>
#include<math.h>
float funch()
{
    int x,n;
    for(x=0; x<=4; x++)
    {
     n=(3*pow(x,2)+(2*x)-9);
     if(n>0)
     {
        break;
     }
    }
    return x-1;
}

float funch_a(float x0)
{
    float x1;
    x1 = x0 - ((3*pow(x0,2)+(2*x0)-9)/((6*x0)+2));
    return x1;
}

int main()
{
    float x0,x1; int i;
    x0=funch();
    for(i=0; i<5; i++)
    {
     x1=funch_a(x0);
     x0=x1;
     printf("APROXIMATION - %d  RESULIT - %f \n",i,x1);
    }
    return 0;
}

