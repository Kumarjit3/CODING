import java.util.Scanner;

public class Pattern
{
   public static void main(String[] args)
   {
      Scanner sc = new Scanner(System.in);
      System.out.printf("\nEnter The Pattern Range : ");
      int range = sc.nextInt();
      int row = range;
      int column = (range+(range-1));
      int left = column/2;
      int right = column/2;
      System.out.printf("\n\n");
      for(int i=0; i<row; i++)
      {
          System.out.printf("\t\t");

          for(int j=0; j<column; j++)
          {

             if(i==row-1)
             {
                if(j == 0 || j%2==0)
                {
                   System.out.printf("*");
                }
                else
                {
                   System.out.printf(" ");
                }
             }
             else if(j==right || j==left)
             {  
                 System.out.printf("*");
             }
             else
             { 
                 System.out.printf(" ");
             }
          } 
           System.out.printf("\n");  
           left--;
           right++;   
      }
       System.out.printf("\n");
       sc.close();
   }
}
