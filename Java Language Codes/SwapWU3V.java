import java.util.Scanner;

public class SwapWU3V
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n");
        System.out.print("\nEnter The Value Of A :- ");
        int A = sc.nextInt();
        System.out.print("\nEnter The Value Of B :- ");
        int B = sc.nextInt();
        System.out.print("\nBefore Swap The Value Of A :- "+A+"\n");
        System.out.print("\nBefore Swap The Value Of B :- "+B+"\n");
        B = A+B;
        A = B-A;
        B = B-A;
        System.out.print("\nAfter Swap The Value Of A :- "+A+"\n");
        System.out.print("\nAfter Swap The Value Of B :- "+B+"\n");
        System.out.print("\n");
        sc.close();
    }
}