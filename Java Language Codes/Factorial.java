import java.util.Scanner;

class Factorial
{

    static long fact(long n) 
    {
         if(n==1)
         return 1;
         else
         return n*fact(n-1);
    }
    public static void main(String a[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter A Number : ");
        long k=sc.nextInt();
        System.out.print("\nThe Factorial Of "+k+" Is :- "+fact(k)+"\n");
        sc.close();
    }
}