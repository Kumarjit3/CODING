import java.util.Scanner;

public class MatrixMultiplication
{

    public static void main(String[] args)
    {
       
       Scanner sc = new Scanner(System.in); 
       int r1,r2,c1,c2;
       int[][] arr = new int[100][100];
       int[][] brr = new int[100][100];
       int[][] crr = new int[200][200];

       System.out.print("\nEnter First Matrix Total Row :- ");
       r1 = sc.nextInt();
       System.out.print("\nEnter First Matrix Total column :- ");
       c1 = sc.nextInt();

       System.out.print("\nEnter First Matrix "+r1*c1+" Elements :- \n");
       for(int i=0; i<r1; i++)
       {
         for(int j=0; j<c1; j++)
         {
             System.out.print("\nArr[ "+i+" ] [ "+j+" ] = ");
             arr[i][j] = sc.nextInt();
         }
          
       }

       System.out.print("\n");

       System.out.print("\nEnter Second Matrix Total Row :- ");
       r2 = sc.nextInt();
       System.out.print("\nEnter Second Matrix Total column :- ");
       c2 = sc.nextInt();
       System.out.print("\nEnter Second Matrix "+r2*c2+" Elements :- \n");
       for(int i=0; i<r2; i++)
       {
         for(int j=0; j<c2; j++)
         {
             System.out.print("\nBrr[ "+i+" ] [ "+j+" ] = ");
             brr[i][j] = sc.nextInt();
         }
          
       }

       System.out.print("\n");
       
       System.out.print("\nAfter Element Insertion First Matrix Is Looks Like :- \n\n");
       for(int i=0; i<r1; i++)
       {
         for(int j=0; j<c1; j++)
         {
             System.out.print(arr[i][j]+" ");
         }
          System.out.print("\n"); 
       }

       System.out.print("\n"); 

       System.out.print("\nAfter Element Insertion Second Matrix Is Looks Like :- \n\n");
       for(int i=0; i<r2; i++)
       {
         for(int j=0; j<c2; j++)
         {
             System.out.print(brr[i][j]+" ");
         }
          System.out.print("\n");
       }

       System.out.print("\n");
      
      if(c1 == r2)
      {

      for(int i=0; i<r1; i++)
       {
         for(int j=0; j<c2; j++)
         {
             crr[i][j]=0;
             for(int k=0; k<c1; k++)
             {
                crr[i][j]+=arr[i][k]*brr[k][j]; 
             }
         }
          
       }

       System.out.print("\n");

       System.out.print("\nAfter Multiplication The Resultant Matrix Is Looks Like :- \n\n");
       for(int i=0; i<r1; i++)
       {
         for(int j=0; j<c2; j++)
         {
             System.out.print(crr[i][j]+" ");
         }
          System.out.print("\n");
       }

        System.out.print("\n");
      
      }
      else
      {
         System.out.print("\nMatrix Multiplication Is Not Possible First Matrix Column Is Not Equals To Second Matrix Row\n\n");
      }

       System.out.print("\n");
       sc.close();

  }
}