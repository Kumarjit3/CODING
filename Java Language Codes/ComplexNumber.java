import java.util.Scanner;

class Complex
{
    private int real;
    private int img;

    public Complex()
    {
       real=0;
       img=0;
    }
  
    public void setData(int r,int i) 
    {
       real=r;
       img=i;
    }

    public void showData()
    {
        System.out.print("\nReal : "+real+"\nImg : "+img+"\n");
    }

    public Complex Add(Complex c)
    {
       Complex cc = new Complex();
       cc.real = c.real + this.real;
       cc.img = c.img + this.img;
       return cc;
    }
    public Complex Sub(Complex c)
    {
       Complex cc = new Complex();
       cc.real = this.real - c.real;
       cc.img = this.img - c.img;
       return cc;
    }
}

public class ComplexNumber
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex c3 = new Complex();
        System.out.print("\nInitialize Member Variables By Using Constructor\n"); 
        c1.showData();
        System.out.print("\nEnter A Real Number : ");
        int r1 = sc.nextInt();
        System.out.print("\nEnter A Imaginary Number : ");
        int i1 = sc.nextInt();
        System.out.print("\n");
        System.out.print("\nEnter A Real Number : ");
        int r2 = sc.nextInt();
        System.out.print("\nEnter A Imaginary Number : ");
        int i2 = sc.nextInt();
        System.out.print("\n");
      
        c1.setData(r1,i1);
        System.out.print("\nC1 Object Details : \n");
        c1.showData();
        c2.setData(r2,i2);
        System.out.print("\nC2 Object Details : \n");
        c2.showData();
        c3 = c1.Add(c2);
        System.out.print("\nAfter Addition C3 Object Is Looks Like : \n");
        c3.showData();
        System.out.print("\n");

        System.out.print("\nEnter A Real Number : ");
        r1 = sc.nextInt();
        System.out.print("\nEnter A Imaginary Number : ");
        i1 = sc.nextInt();
        System.out.print("\n");
        System.out.print("\nEnter A Real Number : ");
        r2 = sc.nextInt();
        System.out.print("\nEnter A Imaginary Number : ");
        i2 = sc.nextInt();
        System.out.print("\n");
      
        c1.setData(r1,i1);
        System.out.print("\nC1 Object Details : \n");
        c1.showData();
        c2.setData(r2,i2);
        System.out.print("\nC2 Object Details : \n");
        c2.showData();
        c3 = c1.Sub(c2);
        System.out.print("\nAfter Subtraction C3 Object Is Looks Like : \n");
        c3.showData();
        System.out.print("\n");
        sc.close();
    }
}