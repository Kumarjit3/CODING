import java.util.Scanner;

class Add
{
     public void sum(int a,int b)
     {
           System.out.print("\nSum Of "+a+" And "+b+" Is Equals To = "+(a+b)+"\n");
     }
     public void sum(int a,int b,int c)
     {
           System.out.print("\nSum Of "+a+" And "+b+" And "+c+" Is Equals To = "+(a+b+c)+"\n");
     }
     public void sum(float a,float b)
     {
           System.out.print("\nSum Of "+a+" And "+b+" Is Equals To = "+(a+b)+"\n");
     }
}

public class FunctionOverloading
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a=5,b=7,c=9;
        float e=5.53f,f=3.33f;
        Add a1 = new Add();
        a1.sum(a,b);
        a1.sum(a,b,c);
        a1.sum(e,f);
        System.out.print("\n");
        sc.close();
    }
} 