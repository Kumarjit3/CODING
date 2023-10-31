#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float funch_x(float y,float z)
{
    float x;
    x = ((8-2*y-z)/5);
    return x;
}
float funch_y(float x,float z)
{
    float y;
    y = ((7-x-4*z)/8);
    return y;
}
float funch_z(float x,float y)
{
    float z;
    z = ((9-4*x-2*y)/2);
    return z;
}

int main()
{
    float x,y,z;
    int n,i;
    x=(8/5);
    y=(7/8);
    z=(9/2);
    printf("%f %f %f",x,y,z);
    printf("Enter the number of approximation you want to see:- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("ITERATION value_of_x value_of_y value_of_z\n");
        printf("   %d      %f         %f        %f\n",i,x,y,z);
        x=funch_x(y,z);
        y=funch_y(x,z);
        z=funch_z(x,y);
    }
    return 0;
}