import java.util.Scanner;

class Animal
{
     public String name = "Animal.....";
     public String work = "Eating.....";
     public String gender = "Male.....";       
}

class Cow extends Animal
{
   void Show()
   {
     System.out.print("\nName : "+name+"\nWork : "+work+"\nGender : "+gender+"\n");
   }    
}

public class SingleInheritance
{
   public static void main(String[] args)
   {
       Scanner sc = new Scanner(System.in);
       Cow c1 = new Cow();
       c1.Show();
       System.out.print("\n");
       sc.close();
   }
}