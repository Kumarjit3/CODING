import java.util.Scanner;

class Mobile
{
     private int price;
     private String brand;
     private static String type;
     
     public Mobile()
     {
         price = 0;
         brand = "Empty(Initialize By Constructor)";
         type = "Empty(Initialize By Constructor)";
     }

     public void SetMobile(int price,String brand,String type)
     {
        this.price=price;
        this.brand=brand;
        Mobile.type=type;
     }

     public void GetMobile()
     {
        System.out.print("\n\nMobile Details : \n");
        System.out.print("\n Mobile Brand : "+brand+"\n");
        System.out.print("\n Mobile Price : "+price+"\n");
        System.out.print("\n Mobile Type  : "+type+"\n");
     }
}

public class Static1 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        Mobile m1 = new Mobile();
        Mobile m2 = new Mobile();
        m1.GetMobile();
        m2.GetMobile();
        System.out.print("\n");

        String brand,type1; int price;
        System.out.print("\nEnter Mobile Brand Name : ");
        brand = input.nextLine();
        System.out.print("\nEnter Mobile Type : ");
        type1 = input.nextLine();
        System.out.print("\nEnter Mobile Price : ");
        price = input.nextInt();

        m1.SetMobile(price, brand, type1);
        m2.SetMobile(17000,"Vivo",type1);
        m1.GetMobile();
        m2.GetMobile();
        System.out.print("\n\n");
        input.close();
    }
}
