#include<stdio.h>
#include<math.h>

float funch_dydx(float *arr)
{
     return (0.1*((arr[0]+arr[6])+(2*(arr[1]+arr[2]+arr[3]+arr[4]+arr[5]))));
    //printf("ok = %f",arr[6]);
}


int main()
{
    float arr[10],h=0.2,p; int i;
    for(i=0; i<=5; i++) { arr[i]=(1/(1+pow(p,2))); p=p+h; }
    for(i=0; i<=5; i++) { printf("%f ",arr[i]); } 
    printf("\n DYDX = %f ",funch_dydx(arr));
    //funch_dydx(arr);
    return 0;   
}