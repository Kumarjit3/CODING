#include <stdio.h>
#include <math.h>

float funch_1()
{
    float x;  int i,m=0,n=0;
    for (i=0; i<=4; i++)
    {
       // x=(3*i-3*cos(i)-7);
       //x=(pow(i,4)-i-10);
       x=3*i-cos(i)-1; 
       printf("x = %f\n",x);
        if (x<0) { n=1; if(m==1) { break; } }
        if (x>0) { m=1; if(n==1) { break; } } 
    }
    return i;
}

float funch_2(float x0)
{
    float x1;
    //x1 = (x0-((3*x0-3*cos(x0)-7)/(3+3*sin(x0))));
    //x1 = ((x0/1)-((pow(x0,4)-x0-10)/(4*pow(x0,3)-1)));
    x1 = (x0-(((3*x0)-(cos(x0)))-1)/(3+sin(x0)));
    return x1;
}

int main()
{
    float x,x0;
    int i=0;
    x = funch_1();
    printf("I=%f \n",x);
    funch_2(x);
    while(i<4)
    {
        x0=funch_2(x);
        printf("x0=%f \n",x0,x=x0);
        i++;
    }
    return 0;
}