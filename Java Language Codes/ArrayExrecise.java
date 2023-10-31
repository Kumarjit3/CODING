import java.util.Scanner;

public class ArrayExrecise
{
     public static void main(String[] args)
     {
         Scanner sc = new Scanner(System.in);
         int[] arr = new int[25];
         System.out.print("\nEnter 25 Positive Integers : \n");
         for(int i=0; i<25; i++)
         {
            System.out.print("\nArray ["+i+"] :- ");
            arr[i] = sc.nextInt();
         }
         System.out.print("\nThe 25 Positive Integers Are : \n");
         for(int i=0; i<25; i++)
         {
            System.out.print(" "+arr[i]+" ");
         }
         System.out.print("\nEnter The Search Item : \n");
         int item = sc.nextInt();
         for(int i=0; i<25; i++)
         {
            if(arr[i] == item)
            {
                System.out.print("\n Array ["+i+"] :- "+arr[i]+"\n");
            }
         }
         System.out.print("\n");
         sc.close();
     }
}