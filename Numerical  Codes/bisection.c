#include<stdio.h>
#include<math.h>

float funch(float x)
{
    return (pow(x,3)-x-11);
}

int main()
{
    float x,s0,f0,A,s,f,H; 
    int v,k,i;
    for(i=0; i<10; i++)
    {
        x=funch(i);
        if(x>0)
        {
            v=1;
            f0=x;
            f=i;
            if(k==1)
            {
                break;
            }
        }
        if(x<0)
        {
            s0=x;
            s=i;
            k=1;
            if(v==1)
            {
                break;
            }
        }
    }
    //printf("s=%d - s0=%f f=%d - f0=%f\n",s,s0,f,f0);
    for(i=1; i<10; i++)
    {
        A=((s+f)/2);
        printf("\ns=%f f=%f A=%f\n",s,f,A);
        H=funch(A);
        printf("%d-NO approximation result is %f\n",i,H);
        if(H<0)
        {
            s=A;
        }
        else
        {
            f=A;
        }
    }
    return 0;
}