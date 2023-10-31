import java.util.Scanner;

public class SumOfDigits
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int number,n,sum=0;
        System.out.print("\nEnter A Number :- ");
        number = sc.nextInt();
        n=number;
        while(n!=0)
        {
            int r = n%10;
            sum+=r;
            n=n/10;
        }
        System.out.print("\nThe Sum Digits Of "+number+" Is :- "+sum+"\n");
        sc.close();
    }
}