//import java.lang.Math;
import java.util.Scanner;

public class Hello
{
    public static void main(String[] args)
    {
         //Factorial Using Recursion
        Scanner sc = new Scanner(System.in);
        /*int n;
        System.out.print("\nEnter A Number : ");
        n = sc.nextInt();
        System.out.print("\nFactorial Of "+n+" Is = "+Fact(n)+"\n");

        //Exercise Of Pow Predifined Function
        int c = 2,d=3;
        int s = (int)Math.pow(c,d);
        System.out.printf("\nC = %d D = %d S = %d\n",c,d,s);
        System.out.print("\n"+c+" To The Power 3 = "+s+"\n");

        //Sum Of Digits Using Recursion
        int n;
        System.out.print("\nEnter A Number : ");
        n = sc.nextInt();
        System.out.print("\nSum Of "+n+"'s All Digits  Is = "+SumOfDigits(n)+"\n");*/

        int n;
        System.out.print("\nEnter A Number : ");
        n = sc.nextInt();
        PrimeFactors(n,n);
        sc.close();
    }

    //Factorial Using Recursion
    static long Fact(int n)
    {
        long F;
        if(n==1)
        return 1;
        else
        F = n * Fact(n-1);
        return F;
    }
    
    //Sum Of Digits Using Recursion
    static long SumOfDigits(int number)
    {
       long sum;

       if(number == 0)
       return 0;
       else
       {
           int r = number%10;
           sum = r + SumOfDigits(number/10);
       }
       return sum;
    }

    static void PrimeFactors(int n,int m)
    {
        if(n>1)
        {
            int count=0;
            for(int i=1; i<=n; i++)
            {
                if(n%i==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                if(m%n==0)
                {
                    System.out.print("\n "+n+" ");
                }
            }
            PrimeFactors(n-1,m);
        }
    }
}