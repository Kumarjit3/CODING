#include<stdio.h>
#include<math.h>

float funch(float x0,float y0)
{
    float c;
    c = (y0-x0);
    return c;
}

int main()
{
    float k1,k2,h=0.1,x0=0,y0=2,y1;  int i;
    for(i=0; i<=1; i++)
    {
    k1=h*funch(x0,y0);
    k2=h*funch(x0+h,y0+k1);
    y1 = (y0+((0.5)*(k1+k2)));
    printf("k1 = %f k2 = %f y1 = %f \n",k1,k2,y1);
    y0=y1;
    x0=0.1;
    }
    return 0;
}