#include<stdio.h>
#include<math.h>

float funch_x(float x)
{
    float n;
     n = x+0.2;
     return n;
}
float funch_y(float y)
{
    float n;
    n=(1/(1+y*y));
    return n;
}

int main()
{
    float arrx[10],arry[10],x=0,y,dx,h=0.2; 
    int i;
    arrx[0]=0; 
    printf("%f ",arrx[0]);
    for(i=1; i<6; i++) 
    { 
        x = funch_x(x); 
        arrx[i]=x; printf("%f ",arrx[i]); 
    }
    printf("\n");
    for(i=0; i<6; i++) 
    {
         y = funch_y(arrx[i]);
         arry[i]=y;
         printf("%f ",arry[i]);
    }
    printf("\n");
   dx=(h/2*(arry[0]+arry[5])+2*(arry[1]+arry[2]+arry[3]+arry[4]));
   printf("dx=%f ",dx);
    return 0;
}