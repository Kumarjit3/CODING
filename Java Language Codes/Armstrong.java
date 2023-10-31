import java.util.Scanner;

public class Armstrong
{

    public static int power(int n,int s)
    {
        int res=1;
        while(s!=0)
        {
            res*=n;
            s--;
        }
        return res;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n");
        System.out.print("\nEnter A Number :- ");
        int n = sc.nextInt();
        int m=n,c=0;
        while(m!=0)
        {
            m=m/10;
            c++;
        }
        int arm=0;
        m=n;
        while(m!=0)
        {
            int r=m%10;
            arm+=power(r,c);
            m=m/10;
        }
        if(arm==n)
        System.out.print("\nThe Number "+n+" Is A Armstrong Number\n");
        else
        System.out.print("\nThe Number "+n+" Is Not A Armstrong Number\n");
        System.out.print("\n");
        sc.close();
    }
}