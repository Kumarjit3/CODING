import java.util.Scanner;

public class SimpleInterest
{
   public static void main(String[] args)
   {
       Scanner sc = new Scanner(System.in);
       int P;
       System.out.print("\nEnter The Number Of Fibonacci Terms You Want To Display : ");
       P = sc.nextInt();
       System.out.print("\n");
       Fibonacci(P);
       System.out.print("\n");
       Si();
       System.out.print("\n");
       sc.close();
   }
   
   static void Fibonacci(int range)
   {
        int a=1,b=0,c;
        System.out.print("\n");
        while(range!=0)
        {
           c = a+b;
           System.out.print(" "+c+" ");
           a = b;
           b = c; 
           --range;
        }
        System.out.print("\n");
   }
   static void Si()
   {
       Scanner sc = new Scanner(System.in);
       float P,R,T;
       System.out.print("\nEnter The Value Of P : ");
       P = sc.nextFloat();
       System.out.print("\nEnter The Value Of R : ");
       R = sc.nextFloat();
       System.out.print("\nEnter The Value Of T : ");
       T = sc.nextFloat();
       float si = (P*R*T)/100;
       System.out.print("\nThe Simple Interest Is : "+si+"\n");
       sc.close();
   }
}