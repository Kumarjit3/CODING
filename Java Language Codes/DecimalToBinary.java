import java.util.Scanner;

public class DecimalToBinary
{
  public static void main(String[] args)
  {
     Scanner sc = new Scanner(System.in);
     System.out.print("\nEnter A Decimal Number :- ");
     int dec = sc.nextInt();
     System.out.print("\n");
     DecToBin(dec);
     System.out.print("\n"); 
     sc.close();
  }
  
   static void DecToBin(int decimal)
   {
        if(decimal==1)
        {
            System.out.print(" 1 ");
        }
        else
        {
           if(decimal/2 == 0)
           {
              DecToBin(decimal/2);
              System.out.print(" "+decimal%2+" "); 
           }
           else
           {
              DecToBin(decimal/2);
              System.out.print(" "+decimal%2+" ");
           }
       
        } 
   }

}