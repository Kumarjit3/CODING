import java.util.Scanner;

class Fibonacci
{
    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Fibonacci Range :- ");
        int n=sc.nextInt();
        int i=0,a=-1,b=1;
        while(i<n)
        {
            i=a+b;
            System.out.print(i+" ");
            a=b;
            b=i;
        }
        sc.close();
    }
}