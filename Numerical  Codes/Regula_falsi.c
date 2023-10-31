#include<stdio.h>
#include<math.h>

float funch(float x)
{
    float c;
     c = (x*log10(x)-1.2);
     return c;
}

float funch_2(float x0,float x1)
{
    float x;
    x = (x0 - ((x1 - x0)/(funch(x1)-funch(x0)))*funch(x0));
    printf(" xr = %f ",x);
    return x;
}
int main()
{
    int i,m=0,v=0; float x,x0,x1,k,r;
    for(i=1; i<=4; i++)
    {
        x = funch(i);      
        if(x<0){ x0=i; v++; if(m>0) { break;} }
        if(x>0){ x1=i; m++; if(v>0) { break;} }
    }
    printf("x0 = %f x1 = %f",x0,x1);
   for(i=0; i<4; i++)
   {
     k = funch_2(x0,x1); r = funch(k);
     if(r<0) { x0=k; } else { x1=k; }
     printf(" k = %f r = %f ",k,r); printf(" x0 = %f x1 = %f\n",x0,x1);
   }
    return 0;
}