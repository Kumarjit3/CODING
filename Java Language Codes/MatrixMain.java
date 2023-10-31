import java.util.Scanner;

class Matrix
{
    Scanner sc = new Scanner(System.in);
    private int [][]arr;
    private int row;
    private int column;
   
    public Matrix(int r,int c)
    {
         row = r;
         column = c;
         arr = new int[r][c];
    }

    public void InsertData()
    {
         System.out.print("\n");
         System.out.print("\nEnter "+row*column+" Matrix Values : \n");
         for(int i=0; i<row; i++)
         {
            for(int j=0; j<column; j++)
            {
               System.out.print("\nMatrix ["+i+"]"+" ["+j+"] : ");
               arr[i][j] = sc.nextInt();
            }
         }
         System.out.print("\n");
    }

    public void ShowMatrix()
    {
        System.out.print("\n");
         for(int i=0; i<row; i++)
         {
            System.out.print("\n\t\t");
            for(int j=0; j<column; j++)
            {
               System.out.print(" "+arr[i][j]+" ");
            }
             System.out.print("\n");
          }
            System.out.print("\n");
    }

    public Matrix MultiplyMatrix(Matrix m)
    {
        Matrix mm = new Matrix(row,m.column);
       if(column == m.row)
       {
        for(int i=0; i<row; i++)
        {
           for(int j=0; j<m.column; j++)
           {
              mm.arr[i][j] = 0;
              for(int k=0; k<column; k++)
              {
                 mm.arr[i][j] += arr[i][k] * m.arr[k][j]; 
              }
           }
        } 
       }
       else
       {
           System.out.printf("\nMatrix Multiplication Not Possible\n");
       }
         return mm;
    }
}

public class MatrixMain
{
     public static void main(String[] args)
     { 
          int row1,row2,column1,column2;
          Scanner s = new Scanner(System.in);
          System.out.print("\n");

          System.out.print("\nEnter The No OF Rows Of The First Matrix : ");
          row1 = s.nextInt();
          System.out.print("\nEnter The No OF Columns Of The First Matrix : ");
          column1 = s.nextInt();
          Matrix m1 = new Matrix(row1,column1);
          System.out.print("\n");
          System.out.print("\nEnter First Matrix "+row1*column1+" Values : \n");
          m1.InsertData();
          System.out.print("\nThe "+row1*column1+" Values Of The First Matrix Is Looks Like: \n");
          m1.ShowMatrix();
          System.out.print("\n");

          System.out.print("\nEnter The No OF Rows Of The Second Matrix : ");
          row2 = s.nextInt();
          System.out.print("\nEnter The No OF columns Of The Second Matrix : ");
          column2 = s.nextInt();
          Matrix m2 = new Matrix(row2,column2);
          System.out.print("\n");
          System.out.print("\nEnter Second Matrix "+row2*column2+" Values : \n");
          m2.InsertData();
          System.out.print("\nThe "+row2*column2+" Values Of The Second Matrix Is Looks Like: \n");
          m2.ShowMatrix();
          System.out.print("\n");
          
          Matrix m3 = new Matrix(row1,column2);
       
          m3 = m1.MultiplyMatrix(m2);
          System.out.print("\nThe Resultant Matrix Is Looks Like: \n");
          m3.ShowMatrix();

          System.out.print("\n");  
          s.close();
     }
}