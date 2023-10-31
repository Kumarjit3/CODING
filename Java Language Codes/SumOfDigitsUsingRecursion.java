import java.util.Scanner;

public class SumOfDigitsUsingRecursion
{
    public static void main(String[] args)
    {
         Scanner sc = new Scanner(System.in);
         System.out.print("\nEnter A Number : ");
         int num = sc.nextInt();
         int result = SumOfDigits(num);
         System.out.print("\nThe Digits Sum Of Number "+num+" Is = "+result+"\n");
         sc.close();
    }
 
     static int SumOfDigits(int number)
     {
         int sum=0;
         if(number==0)
         {
             return 0;   
         }
         else
         {
            sum = SumOfDigits(number/10);
            int rem = number%10;
            sum+=rem;
         }
         return sum;
     }
} 