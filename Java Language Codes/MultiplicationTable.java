import java.util.Scanner;

public class MultiplicationTable
{

     public static void main(String[] args)
     {
         
          Scanner sc = new Scanner(System.in);
          int n;
          System.out.print("\nEnter A Positive Integer :- ");
          n = sc.nextInt();
          System.out.print("\nMultiplication Table Of "+n+" Is Given Bellow :- \n");
          for(int i=1; i<=10; i++)
          {
            System.out.print("\n "+n+" X "+i+" = "+n*i+"\n"); 
          }
          System.out.print("\n");
          sc.close();
     }
}