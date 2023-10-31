import java.util.Scanner;

public class SpecificRangeFibonacci
{
  public static void main(String[] args)
  {
     Scanner sc = new Scanner(System.in);
     System.out.print("\nEnter The Range :- ");
     int range = sc.nextInt();
     System.out.print("\n");
     fibonacci(range,0,1);
     System.out.print("\n"); 
     sc.close();
  }
  
  static void fibonacci(int max,int a,int b)
  {
        int c;
       if(max>=1)
       {
         c = a+b; 
         b = a;
         a = c; 
         System.out.print(" "+c+" ");
         fibonacci(--max,a,b);
       }
  }
}